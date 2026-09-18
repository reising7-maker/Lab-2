// Levi Reising
// Computer Science
/* For this project, we are trying to create a cylinder and figure out the volume and
surface area of that cylinder for a given height and radius*/

#include <iostream>

// Defining the value of pi for calculations
const float pi = 3.141592653;
// Giving the definitions and equation to calculate the surface area of the cylinder
float calculateCylinderSurfaceArea(float radius, float height)
{
	return 2 * pi * radius * (height + radius);
}


// Giving the definitions and equation to calculate the volume of the cylinder
float calculateCylinderVolume(float radius, float height)
{
	return pi * radius * radius * height;
}



// Main functions of the program
int main()

{	
	// The radius of the circular base of the cylinder
	float radius = 5.0;
	// The height of the cylinder
	float height = 14.0;

	// Showing the radius and height of the cylinder
	std::cout << "For a cylinder with the radius " << radius << " and height of " << height << std::endl;

	//Putting space between
	std::cout << "" << std::endl;

	// Calculating the volume of the cylinder
	float volume = calculateCylinderVolume(radius, height);
	std::cout << "Volume of this cylinder: " << volume << std::endl;

	// Calculating the surface area of the cylinder
	float surfaceArea = calculateCylinderSurfaceArea(radius, height);
	std::cout << "Surface Area of this cylinder: " << surfaceArea << std::endl;
	
	// Shows that the program has ended without error
	return 0;
}