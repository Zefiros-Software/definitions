zpm_project()

add_library("${PROJECT_NAME}" INTERFACE)

target_include_directories("${PROJECT_NAME}" INTERFACE "./")

zpm_default_target("${PROJECT_NAME}")
