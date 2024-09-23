#pragma once
#include <glm/glm.hpp>
#include "Shapes.h"

class BoundingBox {
public:
	alignas(16) glm::vec3 boundsMin = glm::vec4(std::numeric_limits<float>::max());
	alignas(16) glm::vec3 boundsMax = glm::vec4(-std::numeric_limits<float>::max());

	void growToInclude(const Triangle* pTri);
private:
	void growToInclude(glm::vec3 pPoint);
};

