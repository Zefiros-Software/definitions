cmake_minimum_required(VERSION 3.13)

if(NOT ZPM_LOADED)
    include("extern/ZPM")

    zpm_defaults()
endif()

project(GoogleTestExample LANGUAGES CXX)

add_executable(test-nlohmannjson test/main.cpp)
target_link_libraries(test-nlohmannjson PRIVATE Zefiros-Software::nlohmannjson)

add_test(NAME test-nlohmannjson COMMAND test-nlohmannjson)
