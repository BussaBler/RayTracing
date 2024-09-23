#include "BoundingBox.h"

void BoundingBox::growToInclude(const Triangle* pTri) {
	this->boundsMin = glm::min(this->boundsMin, glm::vec3(pTri->min));
	this->boundsMax = glm::max(this->boundsMax, glm::vec3(pTri->max));
}

void BoundingBox::growToInclude(glm::vec3 pPoint) {
	this->boundsMin = glm::min(pPoint, this->boundsMin);
	this->boundsMax = glm::max(pPoint, this->boundsMax);
}
