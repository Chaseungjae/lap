#define GLM_ENABLE_EXPERIMENTAL 
#include <iostream>
#include <glm/glm.hpp>
#include <glm/gtx/string_cast.hpp>
using namespace std;
int main()
{
	//Q1

	glm::vec3 pointP(1.0f, 4.0f, -5.0f);
	glm::vec3 vecV(5.0f, 1.0f, 4.0f);
	glm::vec3 result = pointP + vecV;
	cout << glm::to_string(result) << endl;

	//Q2
	glm::vec3 vecv1(1.0f, 0.0f, 0.0f);
	glm::vec3 vecv2(0.0f, 1.0f, 0.0f);
	glm::vec3 result1 = glm::cross(vecv1, vecv2);
	cout << glm::to_string(result1) << endl;

	//Q3
	glm::vec3 vecV1(0.0f, 1.0f, 0.0f);
	vecV1 = vecV1 * 2.0f;
	cout << glm::to_string(vecV1) << endl;

	//Q4
	glm::vec3 vecstart(8.0f, 2.0f, 5.0f);
	glm::vec3 vecend(1.0f, -1.0f, 4.0f);
	glm::vec3 vecdir = vecend - vecstart;

	//Q5
	glm::vec3 v(1.0f, 3.0f, 4.0f);
	glm::vec3 a_h = glm::normalize(v);
	cout << glm::to_string(a_h) << endl;
//	glm::vec4 vecB(4.0f, 5.0f, 6.0f, 7.0f);

	//Q6
	glm::vec3 vec3(1.0f, -1.0f, 4.0f);
	glm::vec4 vec4(vec3, 0.0f);
	cout << glm::to_string(vec4) << endl;
//	std::cout << glm::to_string(vecA) << std::endl;
	return 0;
}