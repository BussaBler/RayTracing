#pragma once
#include "BoundingBox.h"
#include <vector>

struct Node {
	BoundingBox bounds{};
	int triangleIndex;
	int triangleCount;
	int childIndex;
	float padding;
};

