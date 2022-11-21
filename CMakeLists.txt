cmake_minimum_required(VERSION 3.23)
project(test_app)

set(CMAKE_CXX_STANDARD 20)

add_executable(test_app main.cpp src/test.h src/test.cpp src/template/Stack.cpp src/template/Stack.h src/file/test_file.cpp src/file/test_file.h src/common/exception/MyException.cpp src/common/exception/MyException.h)
