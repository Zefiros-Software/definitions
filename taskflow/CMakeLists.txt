cmake_minimum_required(VERSION 3.13)

if(NOT ZPM_LOADED)
  include("extern/ZPM")

  zpm_defaults()
endif()

add_executable(taskflow
    "test/main.cpp"
)

target_link_libraries(taskflow PRIVATE 
    Zefiros-Software::taskflow
)

add_test(NAME taskflow COMMAND taskflow)
