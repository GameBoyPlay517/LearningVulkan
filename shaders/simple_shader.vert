#version 450

//Hard Coding is not always recommended usually these are done pass by reference
vec2 positions[3] = vec2[]
(
    vec2(0.0,-0.5),
    vec2(0.5,0.5),
    vec2(-0.5, 0.5)

);
void main()
{
    //A 4D vector that maps to output frame buffer image
    gl_Position = vec4(positions[gl_VertexIndex], 0.0, 1.0);
}