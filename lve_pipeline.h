//
// Created by grabb on 6/22/2026.
//

#ifndef LEARNINGVULKAN_LVE_PIPELINE_H
#define LEARNINGVULKAN_LVE_PIPELINE_H
#include <string>
#include <vector>

namespace lve {
    class LvePipeline {
    public:
        LvePipeline(const std::string& vertFilepath, const std::string& fragFilepath);
    private:
        static std::vector<char> readFile(const std::string& filepath);

        void createGraphicsPipeline(const std::string& vertFilepath, const std::string& fragFilepath);
    };
}
#endif //LEARNINGVULKAN_LVE_PIPELINE_H