#include <iostream>

int main()
{
	double b1;
	double b2;
	double h;
	double S;

	std::cout << "Enter fist base: ";
	std::cin >> b1;
	std::cout << "Enter second base: ";
	std::cin >> b2;
	std::cout << "Enter height: ";
	std::cin >> h;
	S = (b1 + b2) / 2 * h;
	std::cout << "Square = " << S << std::endl;

	return 0;
}