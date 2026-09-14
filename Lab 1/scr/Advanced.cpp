#include <iostream>
using namespace std;
// Открыл пространство имен std, что бы не писать его каждый раз.
int main()
{
	double katet1 = 0, katet2 = 0, gipotenusa = 0;
	// Просим пользователя ввести первый катет.
	cout << "Input first katet: ";
	cin >> katet1;
	if (cin.fail()) {
		cout << "Error input!" << endl;
		return 1;
	}
	// Проверяем правильность ввода.
	if (katet1 <= 0) {
		cout << "Error: Invalid katet!" << endl;
		return 1;
	}
	//	Просим пользователя ввести второй катет.
	cout << "Input second katet: ";
	cin >> katet2;
	if (cin.fail()) {
		cout << "Error input!" << endl;
		return 1;
	}
	// Проверяем правильность ввода.
	if (katet2 <= 0) {
		cout << "Error: Invalid katet!" << endl;
		return 1;
	}
	// Вычисляем гипотенузу.
	gipotenusa = sqrt(katet1 * katet1 + katet2 * katet2);

	// Проверяем правильность ввода.
	if (katet1 + katet2 <= gipotenusa) {
		cout << "Error: Invalid triangle!" << endl;
		return 1;
	}
	// Вычисляем периметр и площадь треугольника.
	double perimeter = katet1 + katet2 + gipotenusa;
	double area = (katet1 * katet2) / 2.0;
	cout << "Perimeter: " << perimeter << endl;
	cout << "Area: " << area << endl;
	return 0;
}