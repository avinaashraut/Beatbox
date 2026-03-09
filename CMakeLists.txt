cmake_minimum_required(VERSION 3.10)

project(Beatbox)

set(CMAKE_CXX_STANDARD 17)

add_executable(beatbox
    core/engine/player.cpp
)
