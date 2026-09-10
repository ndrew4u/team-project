// Командный проект. Группа ПИ-53.
// Команда: Иванов (в. 32, техлид), Корнаков (в. 59, разработчик), Фролов (в. 6, разработчик)
#include<iostream>
#include <windows.h>
#include<locale.h>
using namespace std;
// === БЛОК ПОДКЛЮЧЕНИЙ: каждый участник добавляет свой #include ===
#include "Ivanov.h"
// === КОНЕЦ БЛОКА ПОДКЛЮЧЕНИЙ ===
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int choice;
	double m;
	double a;
	double result;
	do
	{
		// === БЛОК МЕНЮ: каждый участник добавляет свои пункты ===
		cout << "\n=== Командный проект: сборник расчётов ===\n";
		cout << "1. Сила тяжести (F = m * g)\n";
		cout << "2. Вес в лифте (P = m * (g + a) )\n";
		cout << "0. Выход" << "\n";
		cout << "Ваш выбор: ";
		// === КОНЕЦ БЛОКА МЕНЮ ===
		cin >> choice;
		switch (choice)
		{ // === БЛОК ОБРАБОТКИ: каждый участник добавляет свои case ===
		
		case 1:
			do
			{
				cout << "Введите массу (m): ";
				cin >> m;
				if (m <= 0) cout << "Ошибка! Попробуйте снова!\n\n";
			} while (m <= 0);
			result = gravityForce(m);
			cout << "Результат вычислений: " << result;
			break;
		case  2:
                        do
                        {
                                cout << "Введите массу (m): ";
				cin >> m;
                                if (m <= 0) cout << "Ошибка! Попробуйте снова!\n\n";
                        } while (m <= 0);
			cout << "Введите ускорение (a): ";
			cin >> a;
			result = weightInLift(m, a);
			cout << "Результаты вычислений: " << result;
			break;
		case 0:
			cout << "Работа завершена!" << "\n";
			break;
		default:
			cout << "Такого пункта нет!" << "\n";
		} // === КОНЕЦ БЛОКА ОБРАБОТКИ ===
	} while (choice != 0);
	return 0;
}
