#include <iostream>

int main() {
	int score;

	// Ввод оценки с проверкой на корректность ввода //
	std::cout << "Введите оценку от 0 до 100: ";
	if (!(std::cin >> score)) {
		std::cout << "Ошибка: необходимо ввести целое число.\n";
		return 1;
	}
	// Проверка диапазона оценки //
	if (score < 0 || score > 100) {
		std::cout << "Ошибка: оценка должна быть в диапазоне от 0 до 100.\n";
	}
	// Условия для оценки //
	else if (score >= 90) {
		std::cout << "A\n";
	}
	else if (score >= 75) {
		std::cout << "B\n";
	}
	else if (score >= 60) {
		std::cout << "C\n";
	}
	else if (score >= 50) {
		std::cout << "D\n";
	}
	else {
		std::cout << "F\n";
	}

	return 0;
}
