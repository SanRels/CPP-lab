#include <iostream>
#include<clocale>
using namespace std;
int main() 
{
    // Сделал локализацию на русский язык//
    // setlocale(LC_ALL, "ru");

    // Обьявил переменные//
    double number1 = 0;
    double number2 = 0;

    // Ввод числа номер 1//
    cout << "Введите первое число:";
    cin >> number1;
    // Проверка числа 1//
    if (cin.fail()) {
        cout << "ОШИБКА: Вы ввели не число!!!" << endl;
        cin.clear();
        cin.ignore(1000, '\n');
    }

    //Ввод числа 2//
    cout << "Введите второе число:" << endl;
    cin >> number2;
    //Проверка числа 2//
    if (cin.fail()) {
        cout << "ОШИБКА: Вы ввели не число!!!" << endl;
        cin.clear();
        cin.ignore(1000, '\n');
    }
    
    // Условия //
    if (number1 == number2) //если равны
    {
        cout << "Равны!" << endl; 
    }
    else { // иначе ( Не равны)
        cout << "Не равны!" << endl;
    }
    
    return 0;
}