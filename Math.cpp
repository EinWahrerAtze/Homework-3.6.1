#include "Math.h"

// Сложение
double addition(double a, double b)
{
	return a + b;
}

// Вычитание
double subtraction(double a, double b)
{
	return a - b;
}

// Умножение
double muliplication(double a, double b)
{
	return a * b;
}

// Деление
double division(double a, double b)
{
	return a / b;
}

// Возведение в степень
double power(double a, double b)
{
	double result = 1.0;

	if (b < 0)
	{
		b = -b;

		for (int i = 0; i < b; ++i)
		{
			result *= a;
		}

		return 1 / result;
	}
	else
	{
		for (int i = 0; i < b; ++i)
		{
			result *= a;
		}

		return result;
	}
}