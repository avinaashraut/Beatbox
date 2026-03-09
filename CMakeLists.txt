cmake_minimum_required(VERSION 3.10)

project(Beatbox)

set(CMAKE_CXX_STANDARD 17)

add_executable(beatbox
    core/engine/player.cpp
    core/library/music_library.cpp
    core/decoder/audio_decoder.cpp
    core/output/audio_output.cpp
)
