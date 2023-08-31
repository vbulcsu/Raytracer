#pragma once

#include "OpenGL/Shader.h"
#include "OpenGL/Camera.h"
#include "../Control/Planet.h"

class SceneShader : public Shader
{
public:
	SceneShader(const char* vertexShaderSource, const char* fragmentShaderSource);
	~SceneShader();

	void setPlanet(const std::string& name, SpaceObject* planet) const;
	void setCamera(const std::string& name, Camera* camera) const;

	void setPlanetArr(const std::string& name, std::vector<SpaceObject*> planets) const;
};
