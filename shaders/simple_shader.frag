#version 450

// remove BOM on some files if there is a UTF issue
//Layout - takes location value and we only use location 0.
//Out - we specify that this will be an output qualifier
layout (location = 0) out vec4 outColor;
void main()
{
    outColor = vec4(1.0, 0.0, 0.0, 1.0);

}