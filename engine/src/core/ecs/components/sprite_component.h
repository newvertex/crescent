#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>

#include <seika/rendering/texture.h>
#include <seika/rendering/shader/shader_instance_minimal.h>
#include <seika/math/se_math.h>

typedef struct SpriteComponent {
    SETexture* texture;
    SKARect2 drawSource;
    SKAVector2 origin;
    bool flipH;
    bool flipV;
    SKAColor modulate;
    SEShaderInstanceId shaderInstanceId;
} SpriteComponent;

SpriteComponent* sprite_component_create();
void sprite_component_delete(SpriteComponent* spriteComponent);
SpriteComponent* sprite_component_copy(const SpriteComponent* spriteComponent);

#ifdef __cplusplus
}
#endif