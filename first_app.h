//
// Created by grabb on 6/20/2026.
//

#pragma once
#ifndef LEARNINGVULKAN_FIRST_APP_H
#define LEARNINGVULKAN_FIRST_APP_H

#include "lve_window.h"
#include "lve_pipeline.h"

namespace lve {
    class FirstApp
    {

    public:
        static constexpr int WIDTH = 800;
        static constexpr int HEIGHT = 600;

        void run();
    private:
        LveWindow lveWindow{WIDTH, HEIGHT, "Hello Vulkan!"};
        LvePipeline lvePipeline{"D:/Users/grabb/CLionProjects/LearningVulkan/shaders/simple_shader.vert.spv", "D:/Users/grabb/CLionProjects/LearningVulkan/shaders/simple_shader.vert.spv"};


    };
}

#endif //LEARNINGVULKAN_FIRST_APP_H