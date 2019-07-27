cmake_minimum_required(VERSION 3.13)

if(NOT ZPM_LOADED)
  include("extern/ZPM")

  zpm_defaults()
endif()

add_executable(simdpp
    "test/main.cpp"
)

target_link_libraries(simdpp PRIVATE 
    Zefiros-Software::simdpp
)

add_test(NAME simdpp COMMAND simdpp)
