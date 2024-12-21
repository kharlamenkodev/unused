cmake_minimum_required(VERSION 3.1...3.14)

set(UNUSED unused)

project(${UNUSED} VERSION 0.0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)

add_library(${UNUSED} INTERFACE)
target_include_directories(${UNUSED} INTERFACE ${PROJECT_SOURCE_DIR}/include)