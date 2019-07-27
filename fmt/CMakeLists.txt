cmake_minimum_required(VERSION 3.13)

if(NOT ZPM_LOADED)
  include("extern/ZPM")

  zpm_defaults()
endif()

add_executable(fmt
    "test/main.cpp"
)

target_link_libraries(fmt PRIVATE 
    Zefiros-Software::fmt
)

add_test(NAME fmt COMMAND fmt)
