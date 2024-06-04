cmake_minimum_required(VERSION 3.10)
project(logos)

set(CMAKE_CXX_STANDARD 11)

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

# Find and link GLFW
find_package(glfw3 3.3 REQUIRED)
find_package(OpenGL REQUIRED)

add_executable(logos ${SOURCES})

target_link_libraries(logos glfw OpenGL::GL)
