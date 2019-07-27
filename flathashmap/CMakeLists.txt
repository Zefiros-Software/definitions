cmake_minimum_required(VERSION 3.13)

if(NOT ZPM_LOADED)
  include("extern/ZPM")

  zpm_defaults()
endif()

add_executable(flathashmap
    "test/main.cpp"
)

target_link_libraries(flathashmap PRIVATE 
    Zefiros-Software::flathashmap
)

add_test(NAME flathashmap COMMAND flathashmap)
