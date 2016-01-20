CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

set(PROJECT_NAME perf_framework)
project(${PROJECT_NAME})

set(CMAKE_CONFIGURATION_TYPES "Debug;Release" CACHE STRING "Configs" FORCE)
if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Release)
endif()

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG ${CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE})

set(PERF_LIBRARY ${PROJECT_NAME})
set(PERF_TESTS   "${PROJECT_NAME}_test")
set(PERF_SAMPLE   "${PROJECT_NAME}_sample")
set(PERF_INCLUDE "${CMAKE_CURRENT_SOURCE_DIR}/include")

include_directories("${PERF_INCLUDE}")
include_directories("${CMAKE_CURRENT_SOURCE_DIR}/3rdparty")


# BUILD
add_subdirectory(3rdparty)
add_subdirectory(src)
add_subdirectory(test)
add_subdirectory(sample)

# REPORT
message( STATUS "")
message( STATUS "General configuration for ${PROJECT_NAME}")
message( STATUS "======================================")
message( STATUS "")
message( STATUS "   Configuration:        ${CMAKE_BUILD_TYPE}")
message( STATUS "")
