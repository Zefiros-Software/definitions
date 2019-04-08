cmake_minimum_required(VERSION 3.13)

include("extern/ZPM")

zpm_defaults()

add_subdirectory("googletest" "googletest")
add_subdirectory("simdpp" "simdpp")
add_subdirectory("flathashmap" "flathashmap")
add_subdirectory("nanorange" "nanorange")
add_subdirectory("taskflow" "taskflow")
add_subdirectory("nlohmannjson" "nlohmannjson")