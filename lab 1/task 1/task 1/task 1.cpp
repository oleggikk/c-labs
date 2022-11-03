#include <iostream>

int main()
{
	double b1;
	double b2;
	double h; #Объявляем переменные
	double S;

	std::cout << "Enter fist base: ";
	std::cin >> b1; #Вводим значении b1
	std::cout << "Enter second base: ";
	std::cin >> b2; #Вводим значении b2
	std::cout << "Enter height: ";
	std::cin >> h; #Вводим значении h
		S = (b1 + b2) / 2 * h; #Считаем площадь трапеции
		std::cout << "Square = " << S << std::endl; #Выводим ответ

	return 0;
}