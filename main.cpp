#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#define GLM_FORCE_RADIANS
#define GLM_FORCE_DEPTH_ZERO_TO_ONE
#include <glm/mat4x4.hpp>
#include <glm/vec4.hpp>
#include <iostream>




// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {

    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
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
