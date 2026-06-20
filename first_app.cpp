//
// Created by grabb on 6/20/2026.
//
#include "first_app.h"

namespace lve {

    void FirstApp::run() {
        while (!lveWindow.shouldClose()) {
            glfwPollEvents();
        }
    }
}