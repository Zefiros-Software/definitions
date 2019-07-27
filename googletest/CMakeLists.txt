cmake_minimum_required(VERSION 3.13)

if(NOT ZPM_LOADED)
  include("extern/ZPM")

  zpm_defaults()
endif()

add_executable(googletest
    "gmock/test/fizzbuzz.cpp"
    "gtest/test/main.cpp"
    "gtest/test/simple_lib.cpp"
)

target_link_libraries(googletest PRIVATE 
    Zefiros-Software::GoogleTest
)

add_test(NAME googletest COMMAND googletest)
