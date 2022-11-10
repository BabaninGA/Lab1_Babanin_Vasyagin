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

	std::cout << "Задание №13" << std::endl;
	int random1 = 0;
	int random2 = 0;
	int userResult = 0;
	srand(time(0)); // автоматическая рандомизация
	random1 = 1 + rand() % 9; //первая генерация случайного числа
	random2 = 1 + rand() % 9; //вторая генерация случайного числа
	std::cout << "Сгенерированные числа: " << random1 << " и " << random2 << std::endl;
	std::cout << "Введите произведение этих двух чисел " << std::endl;
	std::cin >> userResult;
	if (equalOfMultiplication(random1, random2, userResult) == true) {
		std::cout << "Вы правы" << std::endl;
	}
	else {
		std::cout << "Вы ошиблись" << std::endl;
	}
	
	return 0;
}