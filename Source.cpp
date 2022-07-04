#include <iostream>
#include "Math.h"

void check(double & d)
{
	while (!(std::wcin >> d))
	{
		std::wcin.clear();
		while (std::wcin.get() != '\n')
			continue;
		std::wcout << L"Пожалуйста, введите число: ";
	}
}

void check(int & n)
{
	while (!(std::wcin >> n))
	{
		std::wcin.clear();
		while (std::wcin.get() != '\n')
			continue;
		std::wcout << L"Пожалуйста, введите целочисленное число: ";
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
	
	wchar_t ch = '0';
	double num_one = 0.0;
	double num_two = 0.0;
	int answer = 0;
	int prec = 2;
	
	std::wcout.setf(std::ios_base::fixed, std::ios_base::floatfield);
	std::wcout.precision(prec);

	std::wcout << L"Введи количество отображаемых знаков после запятой: ";
	check(prec);
	std::wcout.precision(prec);

	while (toupper(ch) != 'E')
	{
		std::system("cls");

		std::wcout << L"Введите первое число: ";
		check(num_one);
		std::wcout << L"Введите второе число: ";
		check(num_two);
		std::wcout << L"Выберите операцию:\n";
		std::wcout << L"1 - сложение, ";
		std::wcout << L"2 - вычитание, ";
		std::wcout << L"3 - умножение, ";
		std::wcout << L"4 - деление, ";
		std::wcout << L"5 - возведение в степень: ";
		check(answer);
		
		switch (answer)
		{
			case 1:
			{
				addition(num_one, num_two);
				break;
			}
			case 2:
			{
				subtraction(num_one, num_two);
				break;
			}
			case 3:
			{
				muliplication(num_one, num_two);
				break;
			}
			case 4:
			{
				division(num_one, num_two);
				break;
			}
			case 5:
			{
				power(num_one, num_two);
				break;
			}
			default:
			{
				std::wcout << L"Неправильный выбор!\n";
			}
		}

		std::wcout << L"Перезапустить? [R] - да, [E] - выход: ";
		std::wcin.get();
		std::wcin.get(ch);

		while (toupper(ch) != 'E' && toupper(ch) != 'R')
		{
			std::wcin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::wcout << L"Неправильный ввод, повторите: ";
			std::wcin >> ch;
		}
	}
	
	std::wcout << L"До встречи!\n";
	return 0;
}