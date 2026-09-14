// Levi Reising
// Computer Science


#include <iostream>


// Giving the definitions and equation to calculate the surface area of the cylinder
float calculateCylinderSurfaceArea(float radius, float height)
{
	//Giving definition to pi for the calculation
	float pi = 3.14159f;
	return 2 * pi * radius * (height + radius);
}


// Giving the definitions and equation to calculate the volume of the cylinder
float calculateCylinderVolume(float radius, float height)
{
	//Giving definition to pi for the calculation
	float pi = 3.14159f;
	return pi * radius * radius * height;
}



// Main functions of the program
int main()

{	
	// The radius of the circular base of the cylinder
	float radius = 5.0;
	// The height of the cylinder
	float height = 10.0;

	// Showing the radius and height of the cylinder
	std::cout << "For a cylinder with the radius " << radius << " and height of " << height << std::endl;

	// Calculating the volume of the cylinder
	float volume = calculateCylinderVolume(radius, height);
	std::cout << "Volume of this cylinder is: " << volume << std::endl;

	// Calculating the surface area of the cylinder
	float surfaceArea = calculateCylinderSurfaceArea(radius, height);
	std::cout << "Surface Area of this cylinder is: " << surfaceArea << std::endl;
	
	// Shows that the program has ended without error
	return 0;
}