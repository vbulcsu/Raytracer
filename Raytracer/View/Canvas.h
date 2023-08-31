#pragma once

#include "../Types/Drawable.h"
#include "OpenGL/Camera.h"

class Canvas : public Drawable
{
private:
	glm::mat4 mTransform;

public:
	Canvas() : Drawable(), mTransform(1.0f) {}
	~Canvas() {}

	void allignToCamera(Camera* camera);
	glm::mat4 getTransform() const;
};
