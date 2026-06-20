//
// Created by simon on 6/20/2026.
//
#pragma once
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>
#include <string>


namespace lve {

    class LveWindow {
    public:
        LveWindow(int w, int h, std::string name);
        ~LveWindow();

        /*
        Implementing Resource Acquisition is Initialization (RAII)
        This allows us to initialize resources when variables are initialized and cleaned up by destructors.
        An example given is, We don't want to accidentally copy a window and then have two pointers to a different window,
        this is because when one of the destructors are called the shared window will be terminated and a dangling ptr will
        be created
        */

        LveWindow(const LveWindow&) = delete;
        LveWindow &operator = (const LveWindow&) = delete;

        bool shouldClose(){return glfwWindowShouldClose(window);}
    private:
        void initWindow();

        const int width;
        const int height;

        std::string windowName;
        GLFWwindow *window;
    };
};