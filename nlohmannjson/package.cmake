zpm_project()

add_library("${PROJECT_NAME}" INTERFACE)

target_include_directories("${PROJECT_NAME}" INTERFACE "include")
target_compile_features("${PROJECT_NAME}" INTERFACE cxx_std_11)

zpm_default_target("${PROJECT_NAME}")
