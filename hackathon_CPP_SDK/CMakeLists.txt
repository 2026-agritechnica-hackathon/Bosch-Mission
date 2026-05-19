cmake_minimum_required(VERSION 3.10)
set(LIB_MAJOR_VERSION "8")
set(LIB_MINOR_VERSION "6")
set(LIB_PATCH_VERSION "0")
set(LIB_VERSION_STRING "${LIB_MAJOR_VERSION}.${LIB_MINOR_VERSION}.${LIB_PATCH_VERSION}")
if (CMAKE_VERSION VERSION_LESS 3.0)
PROJECT(hackathon CXX)
set(PROJECT_VERSION_MAJOR "${LIB_MAJOR_VERSION}")
set(PROJECT_VERSION_MINOR "${LIB_MINOR_VERSION}")
set(PROJECT_VERSION_PATCH "${LIB_PATCH_VERSION}")
set(PROJECT_VERSION "${LIB_VERSION_STRING}")
else()
PROJECT("hackathon" VERSION "${LIB_VERSION_STRING}" LANGUAGES CXX)
endif()
# Set C++ standard to C++17 (required for Poco library)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# ── SeamOS template: auto-extract SDK dependencies ──────────────────────
# Only INSTALL_x86_64.tar.xz is committed (the ~200MB extracted lib/include
# is gitignored). seamos-ide extracts it only during project Import, so a
# build without Import would fail every FIND_PACKAGE below. Extract here at
# configure time — runs identically on Linux (native cmake) and macOS
# (cmake inside the build container). Idempotent.
if(NOT EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/dependencies/lib/cmake")
  if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/dependencies/INSTALL_x86_64.tar.xz")
    message(STATUS "SeamOS: extracting SDK dependencies (INSTALL_x86_64.tar.xz)")
    execute_process(
      COMMAND ${CMAKE_COMMAND} -E tar xf
              "${CMAKE_CURRENT_SOURCE_DIR}/dependencies/INSTALL_x86_64.tar.xz"
      WORKING_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/dependencies"
      RESULT_VARIABLE _seamos_untar_rc)
    if(NOT _seamos_untar_rc EQUAL 0)
      message(FATAL_ERROR "SeamOS: failed to extract SDK dependencies (rc=${_seamos_untar_rc})")
    endif()
  else()
    message(FATAL_ERROR "SeamOS: dependencies/INSTALL_x86_64.tar.xz missing — re-clone the template")
  endif()
endif()
# ────────────────────────────────────────────────────────────────────────


FIND_PACKAGE(Boost 1.73 COMPONENTS log log_setup filesystem REQUIRED)
add_definitions(-DBOOST_LOG_DYN_LINK)
include_directories(${Boost_INCLUDE_DIR})
link_directories(${Boost_LIBRARY_DIR})
FIND_PACKAGE(NEVONEX-FCAL-PLATFORM 3.0 REQUIRED nevonex-fcal-platform)
FIND_PACKAGE(FCAL REQUIRED fcal-runtime_iface)

FIND_PACKAGE(PahoMqttCpp REQUIRED paho-mqttpp3)

FIND_PACKAGE(jsoncpp REQUIRED)
FIND_PACKAGE(Threads REQUIRED)

SET(ADDITIONAL_LINK_LIBRARIES NEVONEX-FCAL-PLATFORM::nevonex-fcal-platform FCAL::fcal-runtime_iface )
SET(ADDITIONAL_PRIVATE_LINK_LIBRARIES PahoMqttCpp::paho-mqttpp3 PahoMqttC::PahoMqttC Boost::log_setup Boost::log jsoncpp_lib)
IF (WIN32)
    SET(ADDITIONAL_PRIVATE_LINK_LIBRARIES  ${ADDITIONAL_PRIVATE_LINK_LIBRARIES} bcrypt)
ENDIF()

add_subdirectory(src-gen)
