#include <iostream>
#include <cmath>
#include <limits>
#include<clocale>

int main() {
	// Сделал локализацию на русский язык//
    setlocale(LC_ALL, "ru");

	// Объявил переменные//
	double a, b, c;

	// Ввод коэффициентов a, b, c с проверкой на корректность ввода
	std::cout << "Решение квадратного уравнения ax^2 + bx + c = 0\n";
	std::cout << "Введите коэффициенты a, b, c: ";

	if (!(std::cin >> a >> b >> c)) {
		std::cout << "Ошибка: необходимо ввести три числа.\n";
		return 1;
	}
	
	// ввел число Епсилон для сравнения с нулем, чтобы избежать проблем с точностью при работе с числами с плавающей запятой.
	const double EPSILON = 1e-9;

	// Если модуль числа меньше EPSILON, то...
	if (std::fabs(a) < EPSILON) {
		if (std::fabs(b) < EPSILON) {
			if (std::fabs(c) < EPSILON) {
				std::cout << "Бесконечное множество решений\n";
			}
			else {
				std::cout << "Решений нет\n";
			}
		}
		// если a = 0, то уравнение становится линейным: bx + c = 0, корень x= -c/b
		else {
			double x = -c / b;
			std::cout << "Линейное уравнение, корень: x = " << x << '\n';
		}
	}
	// Если a != 0, то уравнение является квадратным
	else {
		// Вычисляем дискриминант
		double d = b * b - 4 * a * c;
		double denominator = 2 * a; // знаменатель для формулы корней

		// Если дискриминант положительный
		if (d > EPSILON) {
			double x1 = (-b + std::sqrt(d)) / denominator; // Используем std::sqrt для вычисления квадратного корня
			double x2 = (-b - std::sqrt(d)) / denominator;
			std::cout << "Два действительных корня:\n";
			std::cout << "x1 = " << x1 << '\n';
			std::cout << "x2 = " << x2 << '\n';
		}
		// Если дискриминант равен нулю
		else if (std::fabs(d) <= EPSILON) {
			double x = -b / denominator;
			std::cout << "Один действительный корень: x = " << x << '\n';
		}
		else {
			// Для отрицательного дискриминанта выводим комплексные корни.
			double realPart = -b / denominator; // действительная часть
			double imaginaryPart = std::sqrt(-d) / std::fabs(denominator); // мнимая часть

			std::cout << "Комплексные корни:\n";
			std::cout << "x1 = " << realPart << " + " << imaginaryPart << "i\n";
			std::cout << "x2 = " << realPart << " - " << imaginaryPart << "i\n";
		}
	}

	return 0;
}
