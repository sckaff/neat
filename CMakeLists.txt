cmake_minimum_required(VERSION 3.10)
project(neuroevolution)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)

# Include directories
include_directories(include)
include_directories(third_party/imgui)

# Add source files
file(GLOB_RECURSE SOURCES "src/*.cpp")

# Add third-party libraries
add_subdirectory(third_party/imgui)

# Create the library
add_library(neuroevolution ${SOURCES})

# Link third-party libraries
target_link_libraries(neuroevolution PRIVATE imgui)

# Add examples
add_executable(example examples/simple_nn/main.cpp)
target_link_libraries(example PRIVATE neuroevolution)
