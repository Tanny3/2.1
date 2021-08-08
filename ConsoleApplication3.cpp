#include<iostream>

int main()
{
	setlocale(LC_ALL, "rus");

	int f_grade { 0 }, s_grade { 0 }, t_grade { 0 }, fr_grade { 0 }, fv_grade { 0 };
	double res;

	std::cout << "Введите 1 оценку\n";
	std::cin >> f_grade;
	std::cout << "Введите 2 оценку\n";
	std::cin >> s_grade;
	std::cout << "Введите 3 оценку\n";
	std::cin >> t_grade;
	std::cout << "Введите 4 оценку\n";
	std::cin >> fr_grade;
	std::cout << "Введите 5 оценку\n";
	std::cin >> fv_grade;

	res = (f_grade + s_grade + t_grade + fr_grade + fv_grade) / 5.0;
	std::cout << "Средний балл: " << res <<"\n";

	switch (res >= 4) {
	case 1: {std::cout << "Студент допушен "; break; }
	case 4: {std::cout << "Студент не допушен "; break; }

		default: {std::cout << "Ошибка"; break; }
	}
	return 0;
}