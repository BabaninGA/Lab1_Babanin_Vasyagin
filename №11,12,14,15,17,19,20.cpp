#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <ctime>

//11
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

//12
void twelve()
{
	double a;
	double b;
	std::cout << "������ ����";
	std::cin >> a;
	std::cout << "������ ���";
	std::cin >> b;
	if (a - 100 == b) {
		std::cout << "��������� ����������� ����/��� "<<std::endl;
	}
	else if (a - 100 > b) {
		std::cout << "����� ������� ���";
	}
	else
	{
		std::cout << "����� ��������" <<std::endl;
	}




}


	
//14

void fourteen()
{
	double a;
	double b = 1000;
	std::cout << "������� ���� ������ ";
	std::cin >> a;
	if ((a == 6)||(a==7)) {
		std::cout << "���������� �� ������� 20%: " << (b * 0.8)<<std::endl;
	}
	else {
		std::cout << "���������� ��� ������: " << b << std::endl;
	}
	}
	

//15

static const char* season[] = { "����", "�����", "����", "�����", "������" };

void fifteen() {
	std::cout << "������� ����� ������: ";
	unsigned m;
	std::cin >> m;
	std::cout << season[4 * (m > 12) + (m % 12 / 3) * (m <= 12)] << std::endl;
	if (m == 1) {
		std::cout << "������" << std::endl;
	}
	if (m == 2) {
		std::cout << "�������" << std::endl;
	}
	if (m == 3) {
		std::cout << "����" << std::endl;
	}
	if (m == 4) {
		std::cout << "������" << std::endl;
	}
	if (m == 5) {
		std::cout << "���" << std::endl;
	}
	if (m == 6) {
		std::cout << "����" << std::endl;
	}
	if (m == 7) {
		std::cout << "����" << std::endl;
	}
	if (m == 8) {
		std::cout << "������" << std::endl;
	}
	if (m == 9) {
		std::cout << "��������" << std::endl;
	}
	if (m == 10) {
		std::cout << "�������" << std::endl;
	}
	if (m == 11) {
		std::cout << "������" << std::endl;
	}
	if (m == 12) {
		std::cout << "�������" << std::endl;
	}

}

//17

void seventeen() {
	int num, a;
	std::cout << "������� ����� ������ ";
	std::cin >> num;
	a = num % 10;
	std::cout << num << (a == 1 ? " �������" : a > 1 && a < 5 ? " �������" : " ������") << std::endl;

}

//19

void nineteen() {

	int a;
	int c;
	int b;
	int d;
	int n1, n2, n3;
	std::cout << "������� 3�-������� ����� " << std::endl;
	std::cin >> a;
	std::cout << "������� ����� b " << std::endl;
	std::cin >> b;

	n1 = a / 100;
	n2 = (a - n1 * 100) / 10;
	n3 = (a - n1 * 100 - n2 * 10);

	c = n1 * n2 * n3;
	if (c > b) {
		std::cout << "������������ ���� ������ ����� b" << std::endl;
	}
	if (c < b) {
		std::cout << "������������ ���� ������ ����� b" << std::endl;
	}
	if (c ==b){
		std::cout << "������������ ���� ����� ����� b" << std::endl;
	}
	d = n1 + n2 + n3;

	if (d % 7 == 0) {
		std::cout << "����� ���� ����� ������� ��� ������� �� 7" << std::endl;

	}
	else {
		std::cout << "����� ���� ����� ��� ������� �� 7 �� �������" << std::endl;
	}


}

//20
void twenty() {
	int a, b, c, d;
	std::cout << "������� a " << std::endl;
	std::cin >> a;
	std::cout << "������� b " << std::endl;
	std::cin >> b;
	std::cout << "������� c " << std::endl;
	std::cin >> c;
	std::cout << "������� d " << std::endl;
	std::cin >> d;
	if ((a < c) & (b < d)) {
		std::cout << "������������� �� ��������� ab ����� ������� � ������������� �� ��������� cd" << std::endl;
	}
	else {
		std::cout << "�������������� �� ��������� ab ������ ������� � ������������� �� ��������� cd" << std::endl;
	}
}


	int main() {

		setlocale(LC_ALL, "Russian");
		std::cout << "������� 11" << std::endl;
		std::cout << "������ ����" << std::endl;
		std::cout << "�������� ���� " << eleven() << std::endl;
		std::cout << "������� 12" << std::endl;
		twelve(); 
		std::cout << "������� 14" << std::endl;
		fourteen();
		std::cout << "������� 15" << std::endl;
		fifteen();
		std::cout << "������� 17" << std::endl;
		seventeen();
		std::cout << "������� 19" << std::endl;
		nineteen();
		std::cout << "������� 20" << std::endl;
		twenty();

	
		
	
}
