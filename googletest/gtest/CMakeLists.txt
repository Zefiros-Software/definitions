cmake_minimum_required(VERSION 3.13)

if(NOT ZPM_LOADED)
  include("extern/ZPM")

  zpm_defaults()
endif()

add_executable(gtest
    "test/main.cpp"
    "test/simple_lib.cpp"
)

target_link_libraries(gtest PRIVATE 
    Zefiros-Software::GoogleTest+gtest
)

add_test(NAME gtest COMMAND gtest)
