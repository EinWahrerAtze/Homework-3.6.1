#include "Math.h"

// Сложение
void addition(double a, double b)
{
	std::wcout << a << L" + ";
	b < 0 ? std::wcout << L"(" << b << L")" : std::wcout << b;
	std::wcout << L" = " << a + b << '\n';
}

// Вычитание
void subtraction(double a, double b)
{
	std::wcout << a << L" - ";
	b < 0 ? std::wcout << L"(" << b << L")" : std::wcout << b;
	std::wcout << L" = " << a - b << '\n';
}

// Умножение
void muliplication(double a, double b)
{
	a < 0 ? std::wcout << L"(" << a << L")" : std::wcout << a;
	std::wcout << L" * ";
	b < 0 ? std::wcout << L"(" << b << L")" : std::wcout << b;
	std::wcout << L" = " << a * b << '\n';
}

// Деление
void division(double a, double b)
{
	a < 0 ? std::wcout << L"(" << a << L")" : std::wcout << a;
	std::wcout << L" / ";
	b < 0 ? std::wcout << L"(" << b << L")" : std::wcout << b;
	std::wcout << L" = " << a / b << '\n';
}

// Возведение в степень
void power(double a, double b)
{
	double result = 1.0;

	if (b < 0)
	{
		b = -b;

		for (int i = 0; i < b; ++i)
		{
			result *= a;
		}

		result = 1 / result;
	}
	else
	{
		for (int i = 0; i < b; ++i)
		{
			result *= a;
		}
	}

	std::wcout << a << L" в сепени ";
	b < 0 ? std::wcout << L"(" << b << L")" : std::wcout << b;
	std::wcout << L" = " << result << '\n';
}