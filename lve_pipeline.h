//
// Created by grabb on 6/22/2026.
//

#ifndef LEARNINGVULKAN_LVE_PIPELINE_H
#define LEARNINGVULKAN_LVE_PIPELINE_H
#include <string>
#include <vector>
#include <vulkan/vulkan_core.h>

#include "lve_device.h"


namespace lve {

    // this struct contains data for how our pipeline should be specified
    struct PipelineConfigInfo {
        VkViewport viewport;
        VkRect2D scissor;
        VkPipelineViewportStateCreateInfo viewportInfo;
        VkPipelineInputAssemblyStateCreateInfo inputAssemblyInfo;
        VkPipelineRasterizationStateCreateInfo rasterizationInfo;
        VkPipelineMultisampleStateCreateInfo multisampleInfo;
        VkPipelineColorBlendAttachmentState colorBlendAttachment;
        VkPipelineColorBlendStateCreateInfo colorBlendInfo;
        VkPipelineDepthStencilStateCreateInfo depthStencilInfo;
        VkPipelineLayout pipelineLayout = nullptr;
        VkRenderPass renderPass = nullptr;
        uint32_t subpass = 0;
    };

    class LvePipeline {
    public:
        LvePipeline(LveDevice& device, const std::string& vertFilepath, const std::string& fragFilepath, const PipelineConfigInfo& configInfo);
        ~LvePipeline();

        LvePipeline(const LvePipeline&) = delete;
        void operator=(const LvePipeline&) = delete;

        static PipelineConfigInfo defaultPipelineConfigInfo(uint32_t width, uint32_t height);
    private:
        static std::vector<char> readFile(const std::string& filepath);

        void createGraphicsPipeline(const std::string& vertFilepath, const std::string& fragFilepath, const PipelineConfigInfo& configInfo);

        //VkShaderModule is a pointer of its own, so making shaderModule a ptr, we are essentially making a pointer to a pointer which is what we want
        void createShaderModule(const std::vector<char>& code, VkShaderModule* shaderModule);

        //this can be dangerous if left dangling, the only reason this is here is for implicit relationships that the member variable will out live any dependencies
        LveDevice& lveDevice;
        VkPipeline graphicsPipeline;
        VkShaderModule vertShaderModule;
        VkShaderModule fragShaderModule;
    };
}
#endif //LEARNINGVULKAN_LVE_PIPELINE_H