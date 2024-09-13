// gcc -o todo todo.c -lglfw -lGL

// Include OpenGL header for rendering functions
#include <GL/gl.h>

// Standard input/output library for debugging or output
#include <stdio.h>

// Include GLFW header for managing windows and input
#include <GLFW/glfw3.h>

int main() {
  // Initialize the GLFW library
  glfwInit();

  // Create a window with GLFW, 1280x720 resolution, titled "Todo"
  // The last two NULLs are for monitor and OpenGL context, which we leave at default
  GLFWwindow* windows = glfwCreateWindow(1280, 720, "Todo", NULL, NULL);

  // Make the created window the current context for OpenGL commands
  glfwMakeContextCurrent(windows);

  // Main loop, which runs until the window is closed
  while(!glfwWindowShouldClose(windows)) {
    // Clear the screen with the specified buffer (color buffer in this case)
    glClear(GL_COLOR_BUFFER_BIT);

    // Set the background color (dark gray in this case)
    glClearColor(0.1f, 0.1f, 0.1f, 1.0f);

    // Poll for user input events like key presses or mouse movement
    glfwPollEvents();

    // Swap front and back buffers to display the result
    glfwSwapBuffers(windows);
  }

  // Destroy the window and release resources
  glfwDestroyWindow(windows);

  // Terminate GLFW library and clean up resources
  glfwTerminate();

  return 0;
}

