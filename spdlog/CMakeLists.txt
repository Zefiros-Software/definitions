cmake_minimum_required(VERSION 3.13)

if(NOT ZPM_LOADED)
    include("extern/ZPM")

    zpm_defaults()
endif()

project(GoogleTestExample LANGUAGES CXX)

add_executable(test-spdlog test/main.cpp)
target_link_libraries(test-spdlog PRIVATE Zefiros-Software::spdlog)

add_test(NAME test-spdlog COMMAND test-spdlog)
