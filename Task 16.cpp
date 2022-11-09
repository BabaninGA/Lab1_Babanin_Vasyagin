#include <iostream>
#include <locale.h>

int sumOfDigits(int d)
{
	int d1 = d / 100; // ������� ������ �����
	int d2 = (d - d1 * 100) / 10; // ������� ������ �����
	int d3 = d - d1 * 100 - d2 * 100; // ������� ������ �����
	return d1 + d2 + d3;
}

bool happinessOfTicket(int n) {
	int d123 = 0;
	int d456 = 0;
	d123 = n / 1000;
	d456 = n % 1000;
	if (sumOfDigits(d123) == sumOfDigits(d456)) {
		return true;
	}
	else {
		return false;
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");

	int n = 334433;
	if ((n >= 100000)&&(n<=999999)) {
		if (happinessOfTicket(n) == true) {
			std::cout << "����� ����������" << std::endl;
		}
		else {
			std::cout << "����� �� ����������" << std::endl;
		}
	}
	else {
		std::cout << "������� ������������ ������" << std::endl;
	}
	
	return 0;
}