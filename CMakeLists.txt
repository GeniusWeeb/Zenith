cmake_minimum_required(VERSION 3.14)
project(ZEngine)
include_directories(include)

set(SOURCES 
    src/board.cpp
    src/main.cpp
    )

add_executable(Zenith ${SOURCES})