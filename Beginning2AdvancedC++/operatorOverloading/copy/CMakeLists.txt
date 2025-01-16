cmake_minimum_required(VERSION 3.22)

project(CppProject VERSION 1.0.0 LANGUAGES C CXX)

set(EXECUTABLE_NAME Executable)
set(LIBRARY_NAME Library)

add_library(${LIBRARY_NAME} STATIC "Mystring.cpp")
target_include_directories(${LIBRARY_NAME} PUBLIC ".")

add_executable(${EXECUTABLE_NAME} "main.cpp")
target_link_libraries(${EXECUTABLE_NAME} PUBLIC ${LIBRARY_NAME})

