cmake_minimum_required(VERSION 3.13.0)

project(SNAKE_GAME VERSION 0.0.1)
set(CMAKE_CXX_STANDARD 11)

add_executable(main main.cpp snake.cpp game.cpp)