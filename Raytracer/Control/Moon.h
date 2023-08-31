#pragma once

#include <glm/glm.hpp>

#include "../Types/Movable.h";
#include "../Types/SpaceObject.h";

class Planet;

class Moon : public SpaceObject
{
private:
	float orbitTilt;

	Planet* parent;

public:
	Moon(float radius, float orbitSpeed, float orbitAngle, float orbitRadius, Planet* parent, float orbitTilt = 0.0f, float weight = 0.0077f);
	~Moon();

	void move(float deltaTime) override;
};
