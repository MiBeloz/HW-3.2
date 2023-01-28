#include "Counter.h"

#include <iostream>
#include <Windows.h>


int main() {
	setlocale(LC_ALL, "ru");
	Counter count;
	std::string initialStr;
	int value{};

	std::cout << "�� ������ ������� ��������� �������� ��������? ������� '��' ��� '���': ";
	do {
		SetConsoleCP(1251);
		std::cin >> initialStr;
		SetConsoleCP(866);

		if (initialStr == "��") {
			std::cout << "������� ��������� �������� ��������: ";
			std::cin >> value;
			count.set(value);
			break;
		}
		else if (initialStr == "���") {
			break;
		}
		else {
			std::cout << "������������ ����! ������� '��' ��� '���': ";
		}
	} while (true);

	while (true) {
		std::cout << "������� ������� ('+', '-', '=' ��� 'x'): ";
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
		else if (initialStr == "�") {
			break;
		}
	}

	return 0;
}