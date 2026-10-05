#include <iostream>
#include <iomanip>
#include <cmath>


int main() {
	/////////////////////////
	// 1. Сравнение float vs double////
	/////////////////////////

	float floatValue = 1.0f + 2.0f; // float
	double doubleValue = 1.0 + 2.0; // double

	std::cout << std::fixed << std::setprecision(10);

	std::cout << "Float value: " << floatValue << "\n";
	std::cout << "Double value: " << doubleValue << '\n';


	/////////////////////////////////
	// 2. Накопление погрешности ////
	/////////////////////////////////

	float sumFloat = 0.0f;
	double sumDouble = 0.0;

	for (int i = 0; i < 1000; i++) {
		sumFloat += 0.1f;
		sumDouble += 0.1;
	}
	std::cout << "Погрешность после суммы числа 1000 раз:\n";
	std::cout << "Sum (float) после 1000 сложений: " << sumFloat << "\n";
	std::cout << "Sum (double) после 1000 сложений: " << sumDouble << '\n';

	/////////////////////////////////////
	// 3. Усечений и округление чисел////
	/////////////////////////////////////

	double number = 3.7;
	int truncated = static_cast<int>(number); // Усечение
	int round = static_cast<int>(std::round(number)); // Округление
	std::cout << "Исходное число: " << number << "\n";
	std::cout << "Усечённое число: " << truncated << "\n";
	std::cout << "Округлённое число: " << round << '\n';

}
