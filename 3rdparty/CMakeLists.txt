set(target "gtest")

FILE(GLOB hdrs "gtest/*.h")
FILE(GLOB srcs "gtest/*.cc")

ADD_LIBRARY(${target} STATIC ${srcs})

# FIXME: update this check 
if((("${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang") OR ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU")) AND (${CMAKE_SYSTEM_NAME} MATCHES "Linux"))
    message("Use -pthread")
    set(Pthread "-pthread")
endif()
TARGET_LINK_LIBRARIES(${target} ${Pthread})
