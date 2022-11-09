#include <iostream>
#include <locale.h>


// �9
int hours(int k)
{
	return k / 3600;
}

int minuts(int k)
{
	return (k - hours(k) * 3600) / 60;
}


// �10
bool equilateralTriangle(float a, float b, float c)
{
	if ((a == b) || (a == c) || (b == c)) {
		return true;
	}
	else {
		return false;
	}
}


int main()
{
	setlocale(LC_ALL, "Russian");

	// �9
	int k = 10000;
	if ((k>=0) && (k <= 86400)) {
		std::cout << "� ������ ����� ������: " << hours(k) << " �����/�� ����, " << minuts(k) << " �����/�� �����" << std::endl;
	}
	else {
		std::cout << "������� ������������ ������" << std::endl;
	}

	// �10
	float a = 3.0;
	float b = 3.0;
	float c = 4.0;
	if ((a + b > c) && (a + c > b) && (b + c > a)) {
		if (equilateralTriangle(a, b, c) == true) {
			std::cout << "����������� ��������������";
		}
		else {
			std::cout << "����������� �� ��������������";
		}
	}
	else {
		std::cout << "������� ������������ ������" << std::endl;
	}

	return 0;
}