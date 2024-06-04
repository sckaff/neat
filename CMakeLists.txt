cmake_minimum_required(VERSION 3.10)  # Specify the minimum CMake version required
project(logos)                  # Define the project name

set(CMAKE_CXX_STANDARD 11)            # Set the C++ standard to be used

# Add source files
set(SOURCES
    src/main.cpp
    third-party/imgui/imgui.cpp
    third-party/imgui/imgui_draw.cpp
    third-party/imgui/imgui_demo.cpp
    third-party/imgui/imgui_tables.cpp
    third-party/imgui/imgui_widgets.cpp
    third-party/imgui/backends/imgui_impl_glfw.cpp
    third-party/imgui/backends/imgui_impl_opengl3.cpp
    third-party/glad/src/glad.c
)

# Add include directories
include_directories(
    third-party/imgui
    third-party/imgui/backends
    third-party/glad/include
)

include_directories(/System/Library/Frameworks/OpenGL.framework)

# Find and link GLFW
find_package(glfw3 3.3 REQUIRED)     # Find the GLFW package
find_package(OpenGL REQUIRED)        # Find the OpenGL package

add_executable(logos ${SOURCES})  # Define the executable and its source files

target_link_libraries(logos glfw OpenGL::GL)  # Link the GLFW and OpenGL libraries to the executable
