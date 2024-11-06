cmake_minimum_required(VERSION 3.10)

# Project name
project(CruxIDE VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(${PROJECT_SOURCE_DIR}/include)

file(GLOB SOURCES "src/*.cpp" "src/editor/*.cpp" "src/ui/*.cpp" "src/syntax/*.cpp" "src/utils/*.cpp" "src/core/*.cpp")


add_executable(CruxIDE ${SOURCES})

# Add Google Test
add_subdirectory(googletest)

# Add Test Files
file(GLOB TEST_SOURCES "test/*.cpp")

# Create test executable
add_executable(runTests ${TEST_SOURCES})

# Link test executable with Google test
target_link_libraries(runTests gtest gtest_main)

# Enable CTest
enable_testing()

# Add Tests
add_test(NAME runTests COMMAND runTests)
