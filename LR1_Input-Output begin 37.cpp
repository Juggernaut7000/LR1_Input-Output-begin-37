#include <iostream>

int main()
{ 
	// задача Begin37
	std::cout << "--- Task Begin37 ---" << std::endl;

	// декларація змінних
	double a, b, H;

	// введення змінної a
	std::cout << "Enter number a: ";
	std::cin >> a;

	// введення змінної b
	std::cout << "Enter number b: ";
	std::cin >> b;

	// розрахунок результату
	H = (2 * a * b) / (a + b);

	// вивід результату 
	std::cout << "Harmonic mean H = " << H << std::endl;
	return 0;
} 
