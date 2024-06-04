cmake_minimum_required(VERSION 3.10)
project(logos)

set(CMAKE_CXX_STANDARD 17)

# Add source files
set(SOURCES
    examples/main.cpp
    third_party/imgui/imgui.cpp
    third_party/imgui/imgui_draw.cpp
    third_party/imgui/imgui_demo.cpp
    third_party/imgui/imgui_tables.cpp
    third_party/imgui/imgui_widgets.cpp
    third_party/imgui/backends/imgui_impl_glfw.cpp
    third_party/imgui/backends/imgui_impl_opengl3.cpp
    third_party/glad/src/glad.c
)

# Add include directories
include_directories(
    third_party/imgui
    third_party/imgui/backends
    third_party/glad/include
)

# Find and link GLFW
find_package(glfw3 3.3 REQUIRED)
find_package(OpenGL REQUIRED)

add_executable(logos ${SOURCES})

target_link_libraries(logos glfw OpenGL::GL)
