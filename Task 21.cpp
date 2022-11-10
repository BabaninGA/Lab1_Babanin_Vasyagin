#include <iostream>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");

	std::cout << "Задание №21" << std::endl;
	std::cout << "int: " << sizeof(bool) << " байт" << std::endl;
	std::cout << "char: " << sizeof(char) << " байт" << std::endl;
	std::cout << "wchar_t: " << sizeof(wchar_t) << " байт" << std::endl;
	std::cout << "char16_t: " << sizeof(char16_t) << " байта" << std::endl;
	std::cout << "char32_t: " << sizeof(char32_t) << " байта" << std::endl;
	std::cout << "short: " << sizeof(short) << " байта" << std::endl;
	std::cout << "int: " << sizeof(int) << " байта" << std::endl;
	std::cout << "long: " << sizeof(long) << " байта" << std::endl;
	std::cout << "long long: " << sizeof(long long) << " байта" << std::endl;
	std::cout << "float: " << sizeof(float) << " байта" << std::endl;
	std::cout << "double: " << sizeof(double) << " байт" << std::endl;
	std::cout << "long double: " << sizeof(long double) << " байта" << std::endl;
}