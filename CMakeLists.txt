cmake_minimum_required(VERSION 3.6)
project(learn_C)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Werror")

set(SOURCE_FILES tutorial1.c)
add_executable(learn_C ${SOURCE_FILES})