cmake_minimum_required(VERSION 3.10)
project(Calculator)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Include the external directory for Catch2
include_directories(${CMAKE_SOURCE_DIR}/external)

# Add main executable
add_executable(calculator main.cpp calculator.cpp)

# Add test executable
add_executable(tests test_calculator.cpp calculator.cpp)