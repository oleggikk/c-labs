#include <iostream>


int main()
{
	double a;
	double b;
	double c;
	double S;

	std::cout << "Enter fist base: ";
	std::cin >> a;
	std::cout << "Enter second side: ";
	std::cin >> b;
	
	c = pow((pow(a, 2) + pow(b, 2)), 0.5);
	S = 0.5 * a * b;

	std::cout << "Hypotenuse = " << c << std::endl;
	std::cout << "Square = " << S << std::endl;
	
	return 0;
}