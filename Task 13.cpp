#include <iostream>
#include <locale.h>
#include <ctime>

bool equalOfMultiplication(int random1, int random2, int userResult) {
	if (random1 * random2 == userResult) {
		return true;
	}
	else {
		return false;
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");

	int random1 = 0;
	int random2 = 0;
	int userResult = 0;
	srand(time(0)); // �������������� ������������
	random1 = 1 + rand() % 9; //������ ��������� ���������� �����
	random2 = 1 + rand() % 9; //������ ��������� ���������� �����
	std::cout << "��������������� �����: " << random1 << " � " << random2 << std::endl;
	std::cout << "������� ������������ ���� ���� ����� " << std::endl;
	std::cin >> userResult;
	if (equalOfMultiplication(random1, random2, userResult) == true) {
		std::cout << "�� �����" << std::endl;
	}
	else {
		std::cout << "�� ��������" << std::endl;
	}
	
	return 0;
}