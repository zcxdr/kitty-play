cmake_minimum_required(VERSION 3.10)
project(kitty-play)
set(CMAKE_CXX_STANDARD 17) 

find_package(PkgConfig REQUIRED)
pkg_search_module(PORTAUDIO REQUIRED portaudio-2.0)

add_executable(kitty-play src/main.cpp)

target_link_directories(kitty-play PRIVATE ${PORTAUDIO_INCLUDE_DIRS})
target_link_libraries(kitty-play PRIVATE ${PORTAUDIO_LIBRARIES})
