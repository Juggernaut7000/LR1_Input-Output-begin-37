#include <iostream>
using namespace std;        // Вказ. використання простору імен std (зменшення коду)

int main()
{ 
	// задача Begin37
	cout << "--- Task Begin37 ---" << endl;

	// декларація змінних
	double a, b, H;

	// введення змінної a
	cout << "Enter number a: ";
	cin >> a;

	// введення змінної b
	cout << "Enter number b: ";
	cin >> b;

	// розрахунок результату
	H = (2 * a * b) / (a + b);

	// вивід результату 
	cout << "Harmonic mean H = " << H << endl;
	
	return 0;
} 
