cmake_minimum_required(VERSION 3.13)

include("extern/ZPM")

zpm_defaults()

project(GoogleTestExample LANGUAGES CXX)

add_executable(test-nanorange test/main.cpp)
target_link_libraries(test-nanorange PRIVATE Zefiros-Software::nanorange)

add_test(NAME test-nanorange COMMAND test-nanorange)
