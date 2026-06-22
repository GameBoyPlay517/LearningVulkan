cmake_minimum_required(VERSION 4.0)
project(LearningVulkan)

set(CMAKE_CXX_STANDARD 20)
# Find Vulkan package
find_package(Vulkan REQUIRED)

# Add include directories
include_directories(${Vulkan_INCLUDE_DIRS})
include_directories(D:/Users/grabb/libraries/glfw-3.4.bin.WIN64/include)
include_directories(D:/Users/grabb/libraries/glm)
link_directories(D:/Users/grabb/libraries/glfw-3.4.bin.WIN64/lib-mingw-w64)

add_executable(LearningVulkan main.cpp
        lve_window.h
        lve_window.cpp
        first_app.cpp
        first_app.h
        lve_pipeline.cpp
        lve_pipeline.h)

# Link against Vulkan
target_link_libraries(LearningVulkan ${Vulkan_LIBRARIES})
target_link_libraries(LearningVulkan glfw3.lib)

