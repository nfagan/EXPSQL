cmake_minimum_required(VERSION 2.8)
project(EXPSQL)
set(CMAKE_BUILD_TYPE Release)

set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/build)
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})

include_directories(${CMAKE_SOURCE_DIR}/include/)
link_directories(${CMAKE_SOURCE_DIR}/lib)

file(GLOB_RECURSE SOURCES "src/*.c" "src/*.cpp" "include/*.hpp" "include/*.h")

add_library(EXPSQL STATIC ${SOURCES})
target_link_libraries(EXPSQL sqlite3)

install(TARGETS EXPSQL DESTINATION ${CMAKE_SOURCE_DIR}/lib)