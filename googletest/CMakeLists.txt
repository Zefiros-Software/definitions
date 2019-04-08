cmake_minimum_required(VERSION 3.13)

if(NOT ZPM_LOADED)
    include("extern/ZPM")

    zpm_defaults()
endif()

project(GoogleTestExample LANGUAGES CXX)

add_executable(test-gtest test/main.cpp)
target_link_libraries(test-gtest PRIVATE Zefiros-Software::GoogleTest)

add_test(NAME test-gtest COMMAND test-gtest)
