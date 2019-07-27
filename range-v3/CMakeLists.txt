cmake_minimum_required(VERSION 3.13)

if(NOT ZPM_LOADED)
  include("extern/ZPM")

  zpm_defaults()
endif()

add_executable(range-v3
    "test/main.cpp"
)

target_link_libraries(range-v3 PRIVATE 
    Zefiros-Software::range-v3
)

add_test(NAME range-v3 COMMAND range-v3)
