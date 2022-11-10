#include <iostream>
#include <locale.h>
#include <cstdlib>


// №11
double eleven()
{
	double a;
	std::cin >> a;
	if (a < 1000) {
		return a;
	}
	else {
		return a * 0.9;
	}
}


// "12
void twelve()
{
	double a;
	double b;
	std::cout << "Ведите рост";
	std::cin >> a;
	std::cout << "Ведите вес";
	std::cin >> b;
	if (a - 100 == b) {
		std::cout << "Идеальное соотношение рост/вес " << std::endl;
	}
	else if (a - 100 > b) {
		std::cout << "Стоит набрать вес";
	}
	else
	{
		std::cout << "Стоит похудеть" << std::endl;
	}
}


// "14
void fourteen()
{
	double a;
	double b = 1000;
	std::cout << "Введите день недели ";
	std::cin >> a;
	if ((a == 6) || (a == 7)) {
		std::cout << "Переговоры со скидкой 20%: " << (b * 0.8) << std::endl;
	}
	else {
		std::cout << "Переговоры без скидки: " << b << std::endl;
	}
}


// №15
static const char* season[] = { "Зима", "Весна", "Лето", "Осень", "Ошибка" };

void fifteen() {
	std::cout << "Введите номер месяца: ";
	unsigned m;
	std::cin >> m;
	std::cout << season[4 * (m > 12) + (m % 12 / 3) * (m <= 12)] << std::endl;
	if (m == 1) {
		std::cout << "Январь" << std::endl;
	}
	if (m == 2) {
		std::cout << "Февраль" << std::endl;
	}
	if (m == 3) {
		std::cout << "Март" << std::endl;
	}
	if (m == 4) {
		std::cout << "Апрель" << std::endl;
	}
	if (m == 5) {
		std::cout << "Май" << std::endl;
	}
	if (m == 6) {
		std::cout << "Июнь" << std::endl;
	}
	if (m == 7) {
		std::cout << "Июль" << std::endl;
	}
	if (m == 8) {
		std::cout << "Август" << std::endl;
	}
	if (m == 9) {
		std::cout << "Сентябрь" << std::endl;
	}
	if (m == 10) {
		std::cout << "Октябрь" << std::endl;
	}
	if (m == 11) {
		std::cout << "Ноябрь" << std::endl;
	}
	if (m == 12) {
		std::cout << "Декабрь" << std::endl;
	}
}


// №17
void seventeen() {
	int num, a;
	std::cout << "Введите число копеек ";
	std::cin >> num;
	a = num % 10;
	std::cout << num << (a == 1 ? " копейка" : a > 1 && a < 5 ? " копейки" : " копеек") << std::endl;
}


// №19
void nineteen() {
	int a;
	int c;
	int b;
	int d;
	int n1, n2, n3;
	std::cout << "Введите 3х-значное число a " << std::endl;
	std::cin >> a;
	std::cout << "Введите число b " << std::endl;
	std::cin >> b;

	n1 = a / 100;
	n2 = (a - n1 * 100) / 10;
	n3 = (a - n1 * 100 - n2 * 10);

	c = n1 * n2 * n3;
	if (c > b) {
		std::cout << "Произведение цифр числа a больше числа b" << std::endl;
	}
	if (c < b) {
		std::cout << "Произведение цифр числа a меньше числа b" << std::endl;
	}
	if (c == b) {
		std::cout << "Произведение цифр числа a равно числу b" << std::endl;
	}
	d = n1 + n2 + n3;

	if (d % 7 == 0) {
		std::cout << "Сумма цифр числа a делится без остатка на 7" << std::endl;
	}
	else {
		std::cout << "Сумма цифр числа a без остатка на 7 не делится" << std::endl;
	}
}


// №20
void twenty() {
	int a, b, c, d;
	std::cout << "Введите a " << std::endl;
	std::cin >> a;
	std::cout << "Введите b " << std::endl;
	std::cin >> b;
	std::cout << "Введите c " << std::endl;
	std::cin >> c;
	std::cout << "Введите d " << std::endl;
	std::cin >> d;
	if ((a < c) && (b < d)) {
		std::cout << "Прямоугольник со сторонами ab можно вписать в прямоугольник со сторонами cd" << std::endl;
	}
	else {
		std::cout << "Прямоуогольник со сторонами ab нельзя вписать в прямоугольник со сторонами cd" << std::endl;
	}
}


int main() {

	setlocale(LC_ALL, "Russian");
	std::cout << "Задание 11" << std::endl;
	std::cout << "Ведите цену" << std::endl;
	std::cout << "Конечная цена " << eleven() << std::endl;
	std::cout << "Задание 12" << std::endl;
	twelve();
	std::cout << "Задание 14" << std::endl;
	fourteen();
	std::cout << "Задание 15" << std::endl;
	fifteen();
	std::cout << "Задание 17" << std::endl;
	seventeen();
	std::cout << "Задание 19" << std::endl;
	nineteen();
	std::cout << "Задание 20" << std::endl;
	twenty();
}