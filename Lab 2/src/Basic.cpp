#include <iostream>
#include <limits>

int main()
{
    double number = 0.0;

    while (true)
    {
        std::cout << "Enter a number from -1000000 to 1000000: ";
        std::cin >> number;

        // Проверяем, является ли введённое значение числом.
        // Если пользователь ввёл буквы или другой некорректный символ,
        // возникает ошибка потока ввода.
        if (std::cin.fail())
        {
            std::cout << "Error: non-numeric input!\n";

            // Сбрасываем состояние ошибки потока ввода.
            std::cin.clear();

            // Очищаем неправильные данные из буфера ввода
            // до символа новой строки.
            std::cin.ignore(
                std::numeric_limits<std::streamsize>::max(),
                '\n'
            );
        }


        // Проверяем, находится ли число в допустимом диапазоне.
        // Допустимые значения: от -1000000 до 1000000.
        else if (number < -1000000 || number > 1000000)
        {
            std::cout << "Error: number out of range!\n";
            std::cout << "Please enter a number from -1000000 to 1000000.\n";
        }

        // Если все проверки пройдены успешно,
        // выходим из цикла повторного ввода.
        else
        {
            break;
        }
    }

    // Выводим корректно введённое число.
    std::cout << "Entered number: " << number << '\n';

    // Вычисляем и выводим квадрат введённого числа.
    std::cout << "Square of the number: " << number * number << '\n';

    return 0;
}