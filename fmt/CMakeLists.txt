cmake_minimum_required(VERSION 3.13)

if(NOT ZPM_LOADED)
    include("extern/ZPM")

    zpm_defaults()
endif()

project(GoogleTestExample LANGUAGES CXX)

add_executable(test-fmt test/main.cpp)
target_link_libraries(test-fmt PRIVATE Zefiros-Software::fmt)

add_test(NAME test-fmt COMMAND test-fmt)
