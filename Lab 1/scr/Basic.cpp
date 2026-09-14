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
        // Выводим введённое число.
        cout << "Inputed number: " << number << endl;

        // Вычисляем квадрат числа.
        cout << "Square of number: " << number * number << endl;
    }

    return 0;
}