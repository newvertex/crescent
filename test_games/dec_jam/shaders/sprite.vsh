#version 330 core

layout (location = 0) in float id;
layout (location = 1) in vec2 position;
layout (location = 2) in vec2 textureCoordinates;
layout (location = 3) in vec4 textureColor;
layout (location = 4) in float applyNearestNeighbor;

out float spriteId;
out vec2 texCoord;
out vec4 spriteColor;
out float spriteApplyNearestNeighbor;

uniform mat4 models[100];
uniform mat4 projection;

void main() {
    spriteId = id;
    int spriteIntId = int(id);
    texCoord = textureCoordinates;
    spriteColor = textureColor;
    spriteApplyNearestNeighbor = applyNearestNeighbor;
    gl_Position = projection * models[spriteIntId] * vec4(position, 0.0f, 1.0f);
}