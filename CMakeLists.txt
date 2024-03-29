cmake_minimum_required(VERSION 3.8)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
project(
    CPlusPlusBestC
    LANGUAGES CXX
)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=address")

add_executable(main main.cpp Vector.cpp)