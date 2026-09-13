// Командный проект. Группа ПИ-53.
// Команда: Иванов (в. 32, техлид), Корнаков (, ), Фролов (в. 6, разработчик)
#include<iostream>
#include<locale.h>
#include<windows.h>
using namespace std;
// === БЛОК ПОДКЛЮЧЕНИЙ: каждый участник добавляет свой #include ===
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
		cout << "5. Площадь (равносторонний треугольник)\n";
		cout << "6. Периметр (равносторонний треугольник)\n";
		cout << "7. Высота (равносторонний треугольник)\n";
		cout << "0. Выход" << "\n";
		cout << "Ваш выбор: ";
		// === КОНЕЦ БЛОКА МЕНЮ ===
		cin >> choice;
		switch (choice)
		{ // === БЛОК ОБРАБОТКИ: каждый участник добавляет свои case ===
		case 4: {
		    	cout << "Введите сторону a: ";
		    	cin >> a;
    		    	if (a <= 0) {
        			cout << "Ошибка: сторона должна быть положительной.\n";
    		    	} else {
        			cout << "Площадь = " << equilateralArea(a) << "\n";
    		    	}
    		    	break;
		}
		case 5: {
    		    	cout << "Введите сторону a: ";
    		    	cin >> a;
    		    	if (a <= 0) {
        			cout << "Ошибка: сторона должна быть положительной.\n";
    		    	} else {
        			cout << "Периметр = " << equilateralPerimeter(a) << "\n";
    		    	}
    		    	break;
		}
		case 6: {
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
