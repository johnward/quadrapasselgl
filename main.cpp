#define STB_IMAGE_IMPLEMENTATION

#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <stdio.h>
#include <string.h>
#include <cmath>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <vector>

#include "framework/GLWindow.h"

void drawImage(int ID , float x , float y , float width , float height)
{
    
}

int main()
{   
    GLfloat deltaTime;
    GLfloat lastTime;

    GLWindow mainWindow = GLWindow(1366, 768);
	mainWindow.Initialise();

    while (!glfwWindowShouldClose(mainWindow.getMainWindow()))
    {
        GLfloat currentTime = glfwGetTime(); // SDL_GetPErformanceCounter() <- Need to convert to seconds
		deltaTime = currentTime - lastTime;	 // (currentTime-lastTime)*1000 / SDL_GetPerformanceFrequency() converts it to seconds
		lastTime = currentTime;

        glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

        glfwPollEvents();
    }
}