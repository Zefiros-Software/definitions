cmake_minimum_required(VERSION 3.13)

if(NOT ZPM_LOADED)
  include("extern/ZPM")

  zpm_defaults()
endif()

add_executable(gmock
    "test/fizzbuzz.cpp"
    "test/main.cpp"
)

target_link_libraries(gmock PRIVATE 
    Zefiros-Software::GoogleTest+gmock
)

add_test(NAME gmock COMMAND gmock)
