// Includes GLAD for managing OpenGL function pointers
#include "glad/glad.h"

// Includes GLFW for window creation and input handling
#include <GLFW/glfw3.h>

// Includes Dear ImGui for creating GUI elements
#include "imgui.h"
#include "backends/imgui_impl_glfw.h"
#include "backends/imgui_impl_opengl3.h"

// Standard I/O stream library for error output
#include <iostream>

// Callback function for GLFW errors, outputs error messages to the standard error stream
void glfw_error_callback(int error, const char* description)
{
    std::cerr << "GLFW Error " << error << ": " << description << std::endl;
}

int main(int, char**)
{
    // Set the error callback for GLFW to handle errors
    glfwSetErrorCallback(glfw_error_callback);

    // Initialize the GLFW library, if initialization fails, return with an error code
    if (!glfwInit())
        return -1;

    // Configure GLFW to use OpenGL version 3.2 with core profile
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 2);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE); // For compatibility with MacOS

    // Create a GLFW window with a size of 800x600 and title "ImGui + GLFW + OpenGL"
    GLFWwindow* window = glfwCreateWindow(800, 600, "ImGui + GLFW + OpenGL", NULL, NULL);
    if (!window)
    {
        // If window creation fails, terminate GLFW and return with an error code
        glfwTerminate();
        return -1;
    }

    // Make the OpenGL context of the window current
    glfwMakeContextCurrent(window);
    // Enable vertical synchronization (vsync)
    glfwSwapInterval(1);

    // Initialize GLAD to load the OpenGL function pointers
    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
    {
        std::cerr << "Failed to initialize GLAD!" << std::endl;
        return -1;
    }

    // Initialize Dear ImGui context
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO(); (void)io;

    // Set Dear ImGui style to dark theme
    ImGui::StyleColorsDark();

    // Initialize Dear ImGui for GLFW and OpenGL3
    ImGui_ImplGlfw_InitForOpenGL(window, true);
    ImGui_ImplOpenGL3_Init("#version 150");

    // Variables to hold input text and button state for ImGui widgets
    char inputText[128] = "";
    bool buttonPressed = false;

    // Main rendering loop
    while (!glfwWindowShouldClose(window))
    {
        // Poll and handle events such as keyboard and mouse input
        glfwPollEvents();

        // Start a new ImGui frame
        ImGui_ImplOpenGL3_NewFrame();
        ImGui_ImplGlfw_NewFrame();
        ImGui::NewFrame();

        // Create an ImGui window with widgets
        ImGui::Begin("Simple Window");
        ImGui::Text("Hello, world!");
        ImGui::InputText("Input", inputText, IM_ARRAYSIZE(inputText));
        if (ImGui::Button("Press me"))
        {
            buttonPressed = !buttonPressed;
        }
        if (buttonPressed)
        {
            ImGui::Text("Button was pressed!");
        }
        ImGui::End();

        // Render ImGui's draw data
        ImGui::Render();
        int display_w, display_h;
        glfwGetFramebufferSize(window, &display_w, &display_h);
        glViewport(0, 0, display_w, display_h);
        glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set the background color to white
        glClear(GL_COLOR_BUFFER_BIT);
        ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());

        // Swap front and back buffers
        glfwSwapBuffers(window);
    }

    // Cleanup ImGui and GLFW resources
    ImGui_ImplOpenGL3_Shutdown();
    ImGui_ImplGlfw_Shutdown();
    ImGui::DestroyContext();

    glfwDestroyWindow(window);
    glfwTerminate();

    return 0;
}
