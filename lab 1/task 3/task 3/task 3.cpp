#include <iostream>


int main()
{
	double a;
	double b;
	double c;
	double S;

	std::cout << "Enter fist base: ";
	std::cin >> a; #Вводим катет
	std::cout << "Enter second side: ";
	std::cin >> b; #Вводим катет
	
	c = pow((pow(a, 2) + pow(b, 2)), 0.5); #Считаем площадь, используем метод pow для возведения в степень
	S = 0.5 * a * b; #Считаем площадь

	std::cout << "Hypotenuse = " << c << std::endl;
	std::cout << "Square = " << S << std::endl; #Вывод
	
	return 0;
}