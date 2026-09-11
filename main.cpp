// Командный проект. Группа ПИ-53.
// Команда: Иванов (в. 32, техлид), Корнаков (в. 59, разработчик), Фролов (в. 6, разработчик)
#include<iostream>
#include<locale.h>
#include<windows.h>
using namespace std;
// === БЛОК ПОДКЛЮЧЕНИЙ: каждый участник добавляет свой #include ===
#include "Ivanov.h"
#include "frolov.h"
// === КОНЕЦ БЛОКА ПОДКЛЮЧЕНИЙ ===
int main()
{
	SetConsoleOutputCP(CP_UTF8); 
    	SetConsoleCP(CP_UTF8);
	setlocale(LC_ALL, "RUS");
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
		cout << "5. Площадь (равносторонний треугольник)\n";
		cout << "6. Периметр (равносторонний треугольник)\n";
		cout << "7. Высота (равносторонний треугольник)\n";
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
		case 5: {
		    	cout << "Введите сторону a: ";
		    	cin >> a;
    		    	if (a <= 0) {
        			cout << "Ошибка: сторона должна быть положительной.\n";
    		    	} else {
        			cout << "Площадь = " << equilateralArea(a) << "\n";
    		    	}
    		    	break;
		}
		case 6: {
    		    	cout << "Введите сторону a: ";
    		    	cin >> a;
    		    	if (a <= 0) {
        			cout << "Ошибка: сторона должна быть положительной.\n";
    		    	} else {
        			cout << "Периметр = " << equilateralPerimeter(a) << "\n";
    		    	}
    		    	break;
		}
		case 7: {
    		    	cout << "Введите сторону a: ";
    		    	cin >> a;
    		    	if (a <= 0) {
        			cout << "Ошибка: сторона должна быть положительной.\n";
    		    	} else {
        			cout << "Высота = " << equilateralHeight(a) << "\n";
    		    	}
    		    	break;
		}
		case 0:
			cout << "Работа завершена!" << "\n";
			break;
		default:
			cout << "Такого пункта нет!" << "\n";
		} // === КОНЕЦ БЛОКА ОБРАБОТКИ ===
	} while (choice != 0);
	return 0;
}
