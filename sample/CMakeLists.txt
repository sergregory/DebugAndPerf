set(target "${PERF_SAMPLE}")

FILE(GLOB hdrs "*.h*")
FILE(GLOB srcs "*.cpp")

ADD_EXECUTABLE(${target} ${srcs} ${hdrs})
TARGET_LINK_LIBRARIES(${target} ${PERF_LIBRARY})
