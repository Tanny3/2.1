#include <iostream>

int main()
{
	setlocale(LC_ALL, "rus");

	int num { 0 };
	std::cout << "Введите число: ";
	std::cin >> num;

	if (num % 2 != 0) {
		std::cout << "Число " << num << " нечетное\n";
	}

	else { 
		std::cout << "Число " << num << " четное\n";
	}

	return 0;
}
