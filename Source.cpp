#include <iostream>
#include "Math.h"

void check(double & d)
{
	while (!(std::wcin >> d))
	{
		std::wcin.clear();
		std::wcin.ignore(std::numeric_limits<std::streamsize>::max(), L'\n');
		while (std::wcin.get() != L'\n')
			continue;
		std::wcout << L"Пожалуйста, введите число: ";
	}
}

void check(int & n)
{
	while (!(std::wcin >> n))
	{
		std::wcin.clear();
		std::wcin.ignore(std::numeric_limits<std::streamsize>::max(), L'\n');
		while (std::wcin.get() != L'\n')
			continue;
		std::wcout << L"Пожалуйста, введите целочисленное число: ";
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");

	wchar_t ch = L'0';
	double a = 0.0;
	double b = 0.0;
	int answer = 0;
	int prec = 2;
	
	std::wcout.setf(std::ios_base::fixed, std::ios_base::floatfield);
	std::wcout.precision(prec);

	std::wcout << L"Введите количество отображаемых знаков после запятой: ";
	check(prec);
	std::wcout.precision(prec);

	while (towupper(ch) != L'E')
	{
		std::system("cls");

		std::wcout << L"Введите первое число: ";
		check(a);
		std::wcout << L"Введите второе число: ";
		check(b);
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
				std::wcout << a << L" + ";
				b < 0 ? std::wcout << L"(" << b << L")" : std::wcout << b;
				std::wcout << L" = " << addition(a, b);
				break;
			}
			case 2:
			{
				std::wcout << a << L" - ";
				b < 0 ? std::wcout << L"(" << b << L")" : std::wcout << b;
				std::wcout << L" = " << subtraction(a, b);
				break;
			}
			case 3:
			{
				std::wcout << a << L" * ";
				b < 0 ? std::wcout << L"(" << b << L")" : std::wcout << b;
				std::wcout << L" = " << muliplication(a, b);
				break;
			}
			case 4:
			{
				std::wcout << a << L" : ";
				b < 0 ? std::wcout << L"(" << b << L")" : std::wcout << b;
				std::wcout << L" = " << division(a, b);
				break;
			}
			case 5:
			{
				std::wcout << a << L" в степени ";
				b < 0 ? std::wcout << L"(" << b << L")" : std::wcout << b;
				std::wcout << L" = " << power(a, b);
				break;
			}
			default:
			{
				std::wcout << L"Неправильный выбор!\n";
			}
		}

		std::wcout << L"\nПерезапустить? [R] - да, [E] - выход: ";
		std::wcin.get();
		std::wcin.get(ch);

		while (towupper(ch) != L'E' && towupper(ch) != L'R')
		{
			std::wcin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::wcout << L"Неправильный ввод, повторите: ";
			std::wcin >> ch;
		}
	}
	
	std::wcout << L"До встречи!\n";
	return 0;
}