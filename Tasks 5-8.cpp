#include <iostream>
#include <locale.h>
#include <cmath>

#define PI 3.14159

// №5
float pFromDecToPol(float x, float y) // ρ - полярный радиус; f — полярный угол в радианах; (p;f) - координаты в полярной системе координат
{
	return sqrt(x * x + y * y);
}

float fFromDecToPol(float x, float y)
{
	return atan(y / x);
}


// №6
float xFromPolToDec(float p, float f) // ρ - полярный радиус; f — полярный угол в радианах; (p;f) - координаты в полярной системе координат
{
	return p * cos(f);
}

float yFromPolToDec(float p, float f)
{
	return p * sin(f);
}


// №7
float discriminant(float a, float b, float c)
{
	return b * b - 4 * a * c;
}

float x1(float a, float b, float c) // В данном случае квадратное уравнение задаётся по трём его коэффициентам (a,b,c)
{
	float D = 0.0;
	D = discriminant(a, b, c);
	return (-b + sqrt(D)) / (2 * a);
}

float x2(float a, float b, float c)
{
	float D = 0.0;
	D = discriminant(a, b, c);
	return (-b - sqrt(D)) / (2 * a);
}


// №8
// m,n,k - стороны исходного треугольника
float m_median(float m, float n, float k) // Вычисление первой медианы исходного треугольника
{
	return sqrt(2 * n * n + 2 * k * k - m * m) / 2;
}

float n_median(float m, float n, float k) // Вычисление второй медианы исходного треугольника
{

	return sqrt(2 * m * m + 2 * k * k - n * n) / 2;
}

float k_median(float m, float n, float k) // Вычисление третьей медианы исходного треугольника
{
	return sqrt(2 * m * m + 2 * n * n - k * k) / 2;
}

float m1 = 0.0;
float n1 = 0.0;
float k1 = 0.0;
float m1_median(float m, float n, float k) // Вычисление первой медианы треугольника из медиан
{
	m1 = m_median(m, n, k);
	n1 = n_median(m, n, k);
	k1 = k_median(m, n, k);
	return sqrt(2 * n1 * n1 + 2 * k1 * k1 - m1 * m1) / 2;
}

float n1_median(float m, float n, float k) // Вычисление второй медианы треугольника из медиан
{
	m1 = m_median(m, n, k);
	n1 = n_median(m, n, k);
	k1 = k_median(m, n, k);
	return sqrt(2 * m1 * m1 + 2 * k1 * k1 - n1 * n1) / 2;
}

float p1_median(float m, float n, float k) // Вычисление третьей медианы треугольника из медиан
{
	m1 = m_median(m, n, k);
	n1 = n_median(m, n, k);
	k1 = k_median(m, n, k);
	return sqrt(2 * m1 * m1 + 2 * n1 * n1 - k1 * k1) / 2;
}


int main()
{
	setlocale(LC_ALL, "Russian");

	// №5
	float x = 4.0;
	float y = 5.0;
	std::cout << "Декартовые координаты (" << x << ";" << y << ") в полярной системе координат равны: (" << pFromDecToPol(x, y) << ";" << fFromDecToPol(x, y) << ")" << std::endl;

	// №6
	float p = 3.0; // Полярный радиус 
	float f = 2.0; // Полярный угол в радианах
	if ((p >= 0) && ((f>=0) && (f <= 2 * PI))) {
		std::cout << "Полрные координаты (" << p << ";" << f << ") в декартовой системе координат равны: (" << xFromPolToDec(p, f) << ";" << yFromPolToDec(p, f) << ")" << std::endl;
	}
	else {
		std::cout << "Введены некорректные данные" << std::endl;
	}

	// №7
	float a = 1.0;
	float b = 4.0;
	float c = -5.0;
	if (a != 0) {
		float D = 0.0;
		D = discriminant(a, b, c);
		if (D > 0) {
			std::cout << "Корни квадратного уравнения: x1=" << x1(a, b, c) << "; x2=" << x2(a, b, c) << std::endl;
		}
		else if (D == 0) {
			std::cout << "Корень квадратного уравнения: x=" << x1(a, b, c) << std::endl;
		}
		else {
			std::cout << "Данное квадратное уравнения не имеет корней" << std::endl;
		}
	}
	else {
		std::cout << "Введены некорректные данные" << std::endl;
	}


	// №8
	float m = 2.0;
	float n = 2.0;
	float k = 2.0;
	if ((m + n > k) && (m + k > n) && (n + k > m)) {
		float m1 = 0.0;
		float n1 = 0.0;
		float k1 = 0.0;
		m1 = m_median(m, n, k);
		n1 = n_median(m, n, k);
		k1 = k_median(m, n, k);
		if ((m1 + n1 > k1) && (m1 + k1 > n1) && (n1 + k1 > m1)) {
			std::cout << "Медианы: первая = " << m1_median(m, n, k) << ", вторая = " << n1_median(m, n, k) << ", третья = " << p1_median(m, n, k) << std::endl;
		}
		else {
			std::cout << "Введены некорректные данные" << std::endl;
		}
	}
	else {
		std::cout << "Введены некорректные данные" << std::endl;
	}

	return 0;
}