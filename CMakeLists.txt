cmake_minimum_required(VERSION 3.16.3)
project(my_app)

set(CMAKE_CXX_STANDARD 20)

add_executable(my_app main.cpp src/test.h src/test.cpp src/template/stack.cpp src/template/stack.h src/file/test_file.cpp src/file/test_file.h src/common/exception/my_exception.cpp src/common/exception/my_exception.h)