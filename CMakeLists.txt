cmake_minimum_required(VERSION 3.10)
project(YourProjectName)

# Print out directories for debugging
message(STATUS "CMAKE_SOURCE_DIR: ${CMAKE_SOURCE_DIR}")
message(STATUS "CMAKE_BINARY_DIR: ${CMAKE_BINARY_DIR}")

# Use CMAKE_SOURCE_DIR and CMAKE_BINARY_DIR for paths
set(SOURCES 
    ${CMAKE_SOURCE_DIR}/src/main.cpp
    ${CMAKE_SOURCE_DIR}/src/calculator.cpp
)

add_executable(calculator ${SOURCES})
add_executable(tests 
    ${CMAKE_SOURCE_DIR}/tests/test_main.cpp
    ${SOURCES}
)