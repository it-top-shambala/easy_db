cmake_minimum_required(VERSION 3.24)
project(easy_db)

set(CMAKE_CXX_STANDARD 17)

add_executable(easy_db main.cpp FileServices.h DbServices.h ConsoleServices.h)
