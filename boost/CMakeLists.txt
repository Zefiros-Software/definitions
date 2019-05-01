cmake_minimum_required(VERSION 3.13)

if(NOT ZPM_LOADED)
    include("extern/ZPM")

    zpm_defaults()
endif()

project(GoogleTestExample LANGUAGES CXX)

add_executable(test-boost test/main.cpp)
target_link_libraries(test-boost PRIVATE Zefiros-Software::boost)

add_test(NAME test-boost COMMAND test-boost)
