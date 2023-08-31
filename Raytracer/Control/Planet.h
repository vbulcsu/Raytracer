#pragma once

#include <vector>

#include "glm/glm.hpp"

#include "Moon.h"
#include "../Types/Movable.h"
#include "../Types/SpaceObject.h"

class Planet : public SpaceObject {
protected:
    std::vector<Moon*> moons;

public:
    Planet(float radius, float weight, float orbitSpeed, float orbitAngle, float orbitRadius, float spinSpeed, int materialIndex, int textureIndex);
    ~Planet();

    void add_moon(Moon* moon);

    std::vector<Moon*> get_moons() const;
};
