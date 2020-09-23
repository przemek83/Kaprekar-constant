cmake_minimum_required(VERSION 3.8)

project(kaprekar-constant 
    LANGUAGES CXX 
    VERSION 1.0.0 
    DESCRIPTION "Count substractions before reaching Kaprekar's constant." 
    HOMEPAGE_URL "https://github.com/przemek83/Kaprekar-constant")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

configure_file(${CMAKE_SOURCE_DIR}/testFile.txt ${CMAKE_BINARY_DIR}/testFile.txt COPYONLY)

add_executable(${CMAKE_PROJECT_NAME} main.cpp)
