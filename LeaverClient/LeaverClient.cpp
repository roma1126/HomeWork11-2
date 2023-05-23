#include <iostream>
#include "Leaver.h"
int main()
{
	setlocale(LC_ALL, "Rus");
	system("chcp 1251");

	std::string name;
	Leaver func;

	std::cout << "Введите имя: ";
	std::cin >> name;
	std::cout << func.leave(name);

}


