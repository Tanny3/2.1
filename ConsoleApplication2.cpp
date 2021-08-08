#include <iostream>

int main()
{
	setlocale(LC_ALL, "rus");

	int num { 0 };
	std::cout << "Введите число: ";
	std::cin >> num;
	if (num == 0) {
		std::cout << "Число: " << num << " равно нулю\n";
	}
	else if (num < 0) {
		std::cout << "Число: " << num <<" отрицательное\n";
	}
	else {
		std::cout << "Число: " << num << " положительное\n";
	}

	return 0;
}