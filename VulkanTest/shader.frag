#version 450
layout (binding = 0) uniform sampler2D sampledImage;

layout (location = 0) out vec4 outColor;

void main() {
    vec2 uv = gl_FragCoord.xy / vec2(1280.0, 720.0);
    outColor = texture(sampledImage, uv);
}