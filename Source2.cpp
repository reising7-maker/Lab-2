// Levi Reising
// Computer Science

#include <iostream>

float calculateCylinderVolume(float radius, float height) {
	// Calculate the volume of a cylinder using the formula: V = π * r^2 * h
	const float pi = 3.14159;
	return pi * radius * radius * height;


}
int main() {
	float radius = 5.0;
	// The radius of the circular base of the cylinder
	float height = 10.0;
	// The height of the cylinder

	float volume = calculateCylinderVolume(radius, height);
	std::cout << "The volume of the cylinder is: " << volume << std::endl;

	return 0;
}