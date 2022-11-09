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
	srand(time(0)); // автоматическа€ рандомизаци€
	random1 = 1 + rand() % 9; //перва€ генераци€ случайного числа
	random2 = 1 + rand() % 9; //втора€ генераци€ случайного числа
	std::cout << "—генерированные числа: " << random1 << " и " << random2 << std::endl;
	std::cout << "¬ведите произведение этих двух чисел " << std::endl;
	std::cin >> userResult;
	if (equalOfMultiplication(random1, random2, userResult) == true) {
		std::cout << "¬ы правы" << std::endl;
	}
	else {
		std::cout << "¬ы ошиблись" << std::endl;
	}
	
	return 0;
}