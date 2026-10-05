#define NOMINMAX

#include <iostream>
#include <cmath>
#include <windows.h>
#include <iomanip>
int main()
{
    // Устанавливаем UTF-8, чтобы русский текст корректно
    // отображался в терминале Windows.
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    // Добавляю переменную градусов
    double degrees = 0.0;

    // Константа ПИ
	const double M_PI = 3.14159265358979323846;
    // Повторяем ввод, пока пользователь не введёт
    // корректное значение градусов.
    while (true) 
    {
		std::cout << "Введите градусы от -360 до 360: ";
        std::cin >> degrees;
        // Проверяем, удалось ли считать число.
        // Ошибка возникает, например, при вводе текста вместо числа.
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            std::cout << "Ошибка ввода. Пожалуйста, введите число." << std::endl;

        }
        else if (degrees < -360 || degrees > 360) {
            std::cout << "Ошибка ввода. Пожалуйста, введите значение от -360 до 360." << std::endl;
        }
        else {
            break;
        }
    }
	// Переводим градусы в радианы, так как функции sin, cos и tan в C++ принимают аргументы в радианах.
    // По заданию требуют использовать преобразование Static cast.
	double radians = degrees * (M_PI / static_cast<double>(180));
    // Вычисляем синус, косинус и тангенс угла.
    double sine = std::sin(radians);
    double cosine = std::cos(radians);
    double tangent = std::tan(radians);

	// Форматирование дробных чисел с фиксированной точкой и 6 знаками после запятой.
    std::cout << std::fixed << std::setprecision(6);

    std::cout << "\nПреобразование градусов в радианы:\n";
	std::cout << "Градусов = " << degrees << "\n" << "Радиан = " << radians << std::endl;
	std::cout << "Синус(" << degrees << ") =: " << sine << std::endl;
	std::cout << "Косинус(" << degrees << ") =: " << cosine << std::endl;
	std::cout << "Тангенс(" << degrees << ") =: " << tangent << std::endl;
	return 0;
} 