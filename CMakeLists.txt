cmake_minimum_required(VERSION 3.0)

PROJECT(AP)

set(CMAKE_CXX_STANDARD 11)

Include_directories(include)

add_executable(app main.cpp src/game.cpp src/snake.cpp src/food.cpp src/input.cpp src/print.cpp)

