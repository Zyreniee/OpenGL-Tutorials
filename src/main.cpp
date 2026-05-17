#include "config.h"
#include <GL/gl.h>
#include <GLFW/glfw3.h>
#include <cstddef>

int main(){

    GLFWwindow* window = nullptr;

    if (!glfwInit()) {
        std::cerr << "Failed to initialize GLFW" << std::endl;
        return -1;
    }

    window = glfwCreateWindow(640, 480, "My Window", NULL, NULL);

    if (!window) {
        const char* desc = "";
        int code = glfwGetError(&desc);
        std::cerr << "Failed to create GLFW window (code=" << code << "): " << (desc?desc:"(no description)") << std::endl;
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);

    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
        std::cerr << "Failed to initialize GLAD" << std::endl;
    glfwTerminate();
    return -1;
    }
    
    glClearColor(0.75f, 0.5f, 0.75f, 1.0f);
    std::cout << "GLFW window created and context is current" << std::endl;
    // ensure the window is shown and try to make it floating (on top)
    glfwShowWindow(window);
    glfwSetWindowAttrib(window, GLFW_FLOATING, GLFW_TRUE);

    while (!glfwWindowShouldClose(window)) {
        // show the window and process events
        glfwPollEvents();

        glClear(GL_COLOR_BUFFER_BIT);
        
        glfwSwapBuffers(window);
    }

    glfwDestroyWindow(window);
    glfwTerminate();

    return 0;
}