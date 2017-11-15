cmake_minimum_required(VERSION 2.8)
project(EXPSQL)
set(CMAKE_BUILD_TYPE Release)

get_filename_component(PARENT_DIR ${CMAKE_SOURCE_DIR} DIRECTORY)
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/build)
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})

include_directories(${PARENT_DIR}/include/)
link_directories(${PARENT_DIR}/lib)

file(GLOB_RECURSE SOURCES "main.cpp")

add_executable(EXPSQL ${SOURCES})
target_link_libraries(EXPSQL sqlite3)