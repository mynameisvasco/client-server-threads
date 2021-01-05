cmake_minimum_required(VERSION 3.9.0)
project(thread VERSION 0.0.1)

set(CMAKE_CXX_STANDARD 11)

include_directories(thread ${CMAKE_SOURCE_DIR}/include)
file(GLOB_RECURSE SRC_FILES ${CMAKE_SOURCE_DIR}/src/*.cpp)

add_executable(thread ${SRC_FILES})