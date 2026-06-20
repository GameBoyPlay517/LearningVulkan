#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#define GLM_FORCE_RADIANS
#define GLM_FORCE_DEPTH_ZERO_TO_ONE
#include "first_app.h"
#include <cstdlib>
#include <iostream>
#include <stdexcept>


int main()
{
    lve::FirstApp app{};

    try
    {
        app.run();
    }catch(const std::exception &e) {
        std::cerr << e.what() << "\n";
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}

/*
 This is what makes a window and creates and application!
 *glfwInit();

   glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
   GLFWwindow* window = glfwCreateWindow(800, 600, "Learning Vulkan", nullptr, nullptr);

   uint32_t extensionCount = 0;
   vkEnumerateInstanceExtensionProperties(nullptr, &extensionCount, nullptr);

   std::cout << extensionCount << "extensions supported \n";

   glm::mat4 matrix;
   glm::vec4 vec;
   auto test = matrix * vec;

   //This checks if the window is not closed, if not it checks for inputs and keeps the app responsive
   while (!glfwWindowShouldClose(window)) {

       glfwPollEvents();
   }

   glfwDestroyWindow(window);
   glfwTerminate();
   */
