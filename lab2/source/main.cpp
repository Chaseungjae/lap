#define GLM_ENABLE_EXPERIMENTAL 
#include <iostream>
#include <glm/glm.hpp>
#include <glm/gtx/string_cast.hpp>
using namespace std;
int main(){
	const double DEGREES_TO_RADIANS = glm::pi<float>() / 180.0;
	const double RADIANS_TO_DEGREES = 180.0 / glm::pi<float>();
	glm::vec3 v(2, -1, 1);
	glm::vec3 u(1, 1, 2);

	float d = glm::dot(v, u);
	float c = glm::length(v) * glm::length(u);

	float e = d / c;

	e = glm::acos(e) * RADIANS_TO_DEGREES;
	cout << e << endl;
	return 0;
}