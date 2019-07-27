cmake_minimum_required(VERSION 3.13)

if(NOT ZPM_LOADED)
  include("extern/ZPM")

  zpm_defaults()
endif()

add_executable(spdlog
    "test/main.cpp"
)

target_link_libraries(spdlog PRIVATE 
    Zefiros-Software::spdlog
)

add_test(NAME spdlog COMMAND spdlog)
