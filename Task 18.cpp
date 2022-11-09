#include <iostream>
#include <locale.h>

bool palindrome(int n) {
	int d1 = n / 1000; // Находим первое число
	int d2 = (n - d1 * 1000) / 100; // Находим второе число
	int d3 = (n - d1 * 1000 - d2 * 100) / 10; // Находим третье число
	int d4 = (n - d1 * 1000 - d2 * 100 - d3 * 10); // Находим четвёртое число
	if ((d1 == d4) && (d2 == d3)) {
		return true;
	}
	else {
		return false;
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int n = 1011;
	if ((n >= 1000) && (n <= 9999)) {
		if (palindrome(n) == true) {
			std::cout << "Данное число является палиндромом" << std::endl;
		}
		else {
			std::cout << "Данное число НЕ является палиндромом" << std::endl;
		}
	}
	else {
		std::cout << "Введены некорректные данные" << std::endl;
	}
}