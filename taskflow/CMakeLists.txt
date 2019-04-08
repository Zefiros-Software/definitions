cmake_minimum_required(VERSION 3.13)

include("extern/ZPM")

zpm_defaults()

project(GoogleTestExample LANGUAGES CXX)

add_executable(test-taskflow test/main.cpp)
target_link_libraries(test-taskflow PRIVATE Zefiros-Software::taskflow)

add_test(NAME test-taskflow COMMAND test-taskflow)
