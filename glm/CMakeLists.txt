cmake_minimum_required(VERSION 3.13)

if(NOT ZPM_LOADED)
    include("extern/ZPM")

    zpm_defaults()
endif()

project(GoogleTestExample LANGUAGES CXX)

add_executable(test-glm test/main.cpp)
target_link_libraries(test-glm PRIVATE Zefiros-Software::glm)

add_test(NAME test-glm COMMAND test-glm)
