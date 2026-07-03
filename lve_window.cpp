//
// Created by simon on 6/20/2026.
//

#include "lve_window.h"

#include <stdexcept>

namespace lve {
    LveWindow::LveWindow(int w, int h, std::string name) : width{w}, height {h} , windowName {name}
    {
        initWindow();
    }


    //Gets rid of the window when the destructor is called and cleans up memory to give back to the OS
    LveWindow::~LveWindow()
    {
        glfwDestroyWindow(window);
        glfwTerminate();
    }

    void LveWindow::createWindowSurface(VkInstance instance, VkSurfaceKHR*surface)
    {
        if (glfwCreateWindowSurface(instance, window, nullptr, surface) != VK_SUCCESS)
        {
            throw std::runtime_error("failed to create window surface!");

        }

    }

    void LveWindow::initWindow() {

        glfwInit();
        glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
        glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

        window = glfwCreateWindow(width, height, windowName.c_str(), nullptr, nullptr);
    }
}
