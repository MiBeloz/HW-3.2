#include "Counter.h"

#include <iostream>
#include <Windows.h>


int main() {
	setlocale(LC_ALL, "ru");
	Counter count;
	std::string initialStr;
	int value{};

	std::cout << "Вы хотите указать начальное значение счётчика? Введите 'да' или 'нет': ";
	do {
		SetConsoleCP(1251);
		std::cin >> initialStr;
		SetConsoleCP(866);

		if (initialStr == "да") {
			std::cout << "Введите начальное значение счётчика: ";
			std::cin >> value;
			count.set(value);
			break;
		}
		else if (initialStr == "нет") {
			break;
		}
		else {
			std::cout << "Некорректный ввод! Введите 'да' или 'нет': ";
		}
	} while (true);

	while (true) {
		std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
		SetConsoleCP(1251);
		std::cin >> initialStr;
		SetConsoleCP(866);

		if (initialStr == "+") {
			count++;
		}
		else if (initialStr == "-") {
			count--;
		}
		else if (initialStr == "=") {
			std::cout << count.get() << std::endl;
		}
		else if (initialStr == "х") {
			break;
		}
	}

	return 0;
}