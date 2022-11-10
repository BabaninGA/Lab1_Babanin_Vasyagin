#include <iostream>
#include <locale.h>

const float PI = 3.14159;

// №1
float squeareOftrapeze(float b1, float b2, float h) // Если высота h проведена к стороне b1
{
	return (b1 + b2) * h / 2;
}


// №2
float squeareOfCircle(float r)
{
	return PI * r * r;
}

float lengthOfCircle(float r)
{
	return 2 * PI * r;
}


// №3
float squareOfRightTriangle(float a, float b)
{
	return 0.5 * a * b;
}

float hypotenuse(float a, float b)
{
	return sqrt(a * a + b * b);
}


// №4
int sumOfDigits(int d)
{
	int d1 = d / 1000; // Находим первое число
	int d2 = (d - d1 * 1000) / 100; // Находим второе число
	int d3 = (d - d1 * 1000 - d2 * 100) / 10; // Находим третье число
	int d4 = (d - d1 * 1000 - d2 * 100 - d3 * 10); // Находим четвёртое число
	return d1 + d2 + d3 + d4;
}


int main()
{
	setlocale(LC_ALL, "Russian");

	// №1
	std::cout << "Задание №1" << std::endl;
	float b1 = 7.0;
	float b2 = 6.0;
	float h = 3.0;
	if ((b1 > 0) && (b2 > 0) && (h >= 0)) {
		std::cout << "Площадь трапеции = " << squeareOftrapeze(b1, b2, h) << std::endl;
	}
	else {
		std::cout << "Введены некорректные данные" << std::endl;
	}

	// №2
	std::cout << "Задание №2" << std::endl;
	float r = 5.0;
	if (r >= 0) {
		std::cout << "Площадь круга = " << squeareOfCircle(r) << std::endl;
		std::cout << "Длина окружности = " << lengthOfCircle(r) << std::endl;
	}
	else {
		std::cout << "Введены некорректные данные" << std::endl;
	}

	// №3
	std::cout << "Задание №3" << std::endl;
	float a = 3.0;
	float b = 4.0;
	if ((a > 0) && (b > 0)) {
		std::cout << "Площадь прямоугольного треугольника = " << squareOfRightTriangle(a, b) << std::endl;
		std::cout << "Гипотенуза = " << hypotenuse(a, b) << std::endl;
	}
	else {
		std::cout << "Введены некорректные данные" << std::endl;
	}

	// №4
	std::cout << "Задание №4" << std::endl;
	int d = 7777;
	if (d >= 1000) {
		std::cout << "Сумма цифр четырёхзначного числа = " << sumOfDigits(d) << std::endl;
	}
	else if (d <= -1000) {
		d = -d;
		std::cout << "Сумма цифр четырёхзначного числа = " << sumOfDigits(d) << std::endl;
	}
	else {
		std::cout << "Введены некорректные данные" << std::endl;
	}

	return 0;
}