#include <iostream>
using namespace std;
// Открыл пространство имен std, что бы не писать его каждый раз.
int main()
{
	double number = 0;
	// Просим пользователя ввести число.
	cout << "Input number: ";
	// Проверяем правильность ввода.
	if (!(cin >> number)) {
		cout << "Error input!" << endl;
		return 1;
	}
	else {
		// Вычисляем квадрат числа.
		cout << "Square of number: " << number * number << endl;
		// Вычисляем куб числа.
		cout << "Cube of number: " << number * number * number << endl;
	}
	return 0;
}