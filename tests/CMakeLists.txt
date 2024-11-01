find_package(GTest REQUIRED)

enable_testing()

set(CONSOLE_APP_TESTS console_app_tests)

add_executable(${CONSOLE_APP_TESTS}
                console_app_tests.cpp)

target_link_libraries(
    ${CONSOLE_APP_TESTS}
    GTest::gtest_main
)

target_include_directories(${CONSOLE_APP_TESTS} PUBLIC ${PROJECT_SOURCE_DIR}/include)