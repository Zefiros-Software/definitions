zpm_project()

file(GLOB_RECURSE sources CONFIGURE_DEPENDS "src/*.cc")
add_library("${PROJECT_NAME}" ${sources})

target_include_directories("${PROJECT_NAME}" PUBLIC "include")
target_compile_features("${PROJECT_NAME}" PUBLIC cxx_std_14)

zpm_default_target("${PROJECT_NAME}")
