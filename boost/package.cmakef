zpm_project()

file(GLOB_RECURSE sources CONFIGURE_DEPENDS "libs/*/src/**")
add_library("${PROJECT_NAME}" ${sources})

target_include_directories("${PROJECT_NAME}" PUBLIC "./")
target_compile_definitions("${PROJECT_NAME}" PUBLIC "BOOST_ALL_NO_LIB" "BOOST_TEST_NO_MAIN")

target_include_directories("${PROJECT_NAME}" PRIVATE "libs/atomic/include")
target_compile_features("${PROJECT_NAME}" PRIVATE cxx_std_11)

zpm_default_target("${PROJECT_NAME}")
