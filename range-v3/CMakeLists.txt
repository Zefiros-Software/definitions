cmake_minimum_required(VERSION 3.13)

if(NOT ZPM_LOADED)
    include("extern/ZPM")

    zpm_defaults()
endif()

project(GoogleTestExample LANGUAGES CXX)

add_executable(test-range-v3 test/main.cpp)
target_link_libraries(test-range-v3 PRIVATE Zefiros-Software::range-v3)

add_test(NAME test-range-v3 COMMAND test-range-v3)
