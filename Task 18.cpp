#include <iostream>
#include <locale.h>

bool palindrome(int n) {
	int d1 = n / 1000; // ������� ������ �����
	int d2 = (n - d1 * 1000) / 100; // ������� ������ �����
	int d3 = (n - d1 * 1000 - d2 * 100) / 10; // ������� ������ �����
	int d4 = (n - d1 * 1000 - d2 * 100 - d3 * 10); // ������� �������� �����
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
			std::cout << "������ ����� �������� �����������" << std::endl;
		}
		else {
			std::cout << "������ ����� �� �������� �����������" << std::endl;
		}
	}
	else {
		std::cout << "������� ������������ ������" << std::endl;
	}
}