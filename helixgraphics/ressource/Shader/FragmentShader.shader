#version 460 core

in vec3 fragColor;
uniform vec4 u_Color;

layout(location = 0) out vec4 Color;

void main()
{
	Color = vec4(fragColor, 1.0) + u_Color;
}