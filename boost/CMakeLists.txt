cmake_minimum_required(VERSION 3.13)

if(NOT ZPM_LOADED)
  include("extern/ZPM")

  zpm_defaults()
endif()

add_executable(boost
    "test/main.cpp"
)

target_link_libraries(boost PRIVATE 
    Zefiros-Software::boost
)

add_test(NAME boost COMMAND boost)
