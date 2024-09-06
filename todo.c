#include <GL/gl.h>
#include <stdio.h>
#include <GLFW/glfw3.h>

int main() {
  glfwInit();

  GLFWwindow* windows = glfwCreateWindow(1280, 720, "Todo", NULL, NULL);

  glfwMakeContextCurrent(windows);

  while(!glfwWindowShouldClose(windows)) {
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(0.1f, 0.1f, 0.1f, 1.0f);

    glfwPollEvents();
    glfwSwapBuffers(windows);
  }

  glfwDestroyWindow(windows);
  glfwTerminate();

  return 0;
}

