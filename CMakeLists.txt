cmake_minimum_required(VERSION 3.1...3.14)

project(cmake_console_app VERSION 0.0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)

if (BUILD_TESTS)
    add_subdirectory(tests)
endif()

set(CONSOLE_APP console_app)

add_executable(${CONSOLE_APP} src/main.cpp)

target_link_libraries(
    ${CONSOLE_APP}
    # todo - link logger
)

target_include_directories(${CONSOLE_APP} PUBLIC ${PROJECT_SOURCE_DIR}/include)