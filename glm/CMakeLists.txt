cmake_minimum_required(VERSION 3.13)

if(NOT ZPM_LOADED)
  include("extern/ZPM")

  zpm_defaults()
endif()

add_executable(glm
    "test/main.cpp"
)

target_link_libraries(glm PRIVATE 
    Zefiros-Software::glm
)

add_test(NAME glm COMMAND glm)
