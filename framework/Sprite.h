#ifndef SPRITE_H
#define SPRITE_H

#include <stdio.h>
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

class Sprite
{
public:
    Sprite(const char *fileLoc);

    void drawpieces(glm::vec2 position);
    ~Sprite();

private:
    const char *fileLocation;
    GLuint textureID;
    int width, height, bitDepth;

};

#endif