#include <iostream>

float ConvertToRadians(float degree) {
	float result = degree * 3.14 / 180;
	return result;
}

void Create_Circle() {
	float radius;
	std::cout << "Enter radius for the Circumference: " << std::endl;
	std::cin >> radius;

	for (int i = 0; i < 360; i++) {
		float degrees = (360 / 100) * i;
		float theta = ConvertToRadians(degrees);
		float x = cos(theta) * radius;
		float y = sin(theta) * radius;

		std::cout << "X coordinate > " << x << " Y coordinate > " << y << std::endl;
	}
}