cmake_minimum_required(VERSION 3.13)

if(NOT ZPM_LOADED)
  include("extern/ZPM")

  zpm_defaults()
endif()

add_executable(nanorange
    "test/main.cpp"
)

target_link_libraries(nanorange PRIVATE 
    Zefiros-Software::nanorange
)

add_test(NAME nanorange COMMAND nanorange)
