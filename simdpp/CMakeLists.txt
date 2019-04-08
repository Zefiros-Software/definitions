cmake_minimum_required(VERSION 3.13)

include("extern/ZPM")

zpm_defaults()

project(GoogleTestExample LANGUAGES CXX)

add_executable(test-simdpp test/main.cpp)
target_link_libraries(test-simdpp PRIVATE Zefiros-Software::simdpp)

add_test(NAME test-simdpp COMMAND test-simdpp)
