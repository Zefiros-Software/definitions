cmake_minimum_required(VERSION 3.13)

if(NOT ZPM_LOADED)
  include("extern/ZPM")

  zpm_defaults()
endif()

add_executable(nlohmannjson
    "test/main.cpp"
)

target_link_libraries(nlohmannjson PRIVATE 
    Zefiros-Software::nlohmannjson
)

add_test(NAME nlohmannjson COMMAND nlohmannjson)
