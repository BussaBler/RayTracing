#define GLM_FORCE_DEFAULT_ALIGNED_GENTYPES
#ifndef SHAPES_H
#define SHAPES_H


#include <glm/glm.hpp>
#include <limits>

struct alignas(16) Material {
	glm::vec4 color;
	glm::vec4 emissionColor;
	float smoothness;
	float emissionStrength;
	float specularProbability;
	float pading;
};

struct Triangle
{
	glm::vec4 posA, posB, posC;
	glm::vec4 normalA, normalB, normalC;
	Material material;
	glm::vec4 min, max;
};

struct MeshInfo {
	glm::vec4 info;
	Material material;
	glm::vec4 boundsMin;
	glm::vec4 boundsMax;

	void addTriangle(Triangle* pTri) {
		this->boundsMax = glm::max(this->boundsMax, pTri->posA);
		this->boundsMax = glm::max(this->boundsMax, pTri->posB);
		this->boundsMax = glm::max(this->boundsMax, pTri->posC);

		this->boundsMin = glm::min(this->boundsMin, pTri->posA);
		this->boundsMin = glm::min(this->boundsMin, pTri->posB);
		this->boundsMin = glm::min(this->boundsMin, pTri->posC);
	}
};

#endif // !SHAPES_H