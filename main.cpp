// Командный проект. Группа ПИ-53.
// Команда: Иванов (в. 32, техлид), Корнаков (в. 59, разработчик), Фролов (в. 6, разработчик)
#include<iostream>
#include<locale.h>
#include<windows.h>
using namespace std;
// === БЛОК ПОДКЛЮЧЕНИЙ: каждый участник добавляет свой #include ===
#include "frolov.h"
#include "kornakov.h"
// === КОНЕЦ БЛОКА ПОДКЛЮЧЕНИЙ ===
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int choice;
	double m;
	double a;
	double x;
	double result;
	do
	{
		// === БЛОК МЕНЮ: каждый участник добавляет свои пункты ===
		cout << "\n=== Командный проект: сборник расчётов ===\n";
		cout << "3. Квадратный корень\n";
		cout << "4. Кубический корень\n";
		cout << "5. Площадь (равносторонний треугольник)\n";
		cout << "6. Периметр (равносторонний треугольник)\n";
		cout << "7. Высота (равносторонний треугольник)\n";
		cout << "0. Выход\n";
		cout << "Ваш выбор: ";
		// === КОНЕЦ БЛОКА МЕНЮ ===
		cin >> choice;
		switch (choice)
		{ // === БЛОК ОБРАБОТКИ: каждый участник добавляет свои case ===
		case 3: {
			cout << "Введите число (положительное):";
			cin >> x;
			if (x < 0) {
				cout << "Ошибка: число должно быть положительным.\n";
			}
			else {
				cout << "Квадратный корень из " << x << " = " << sqrtHeron(x) << "\n";
			}
			break;
		}
		case 4: {
			cout << "Введите число:";
			cin >> x;
				cout << "Кубический корень из " << x << " = " << cubeRoot(x) << "\n";
			break;
		}
		case 5: {
		    	cout << "Введите сторону a: ";
		    	cin >> a;
    		    	if (a <= 0) {
        			cout << "Ошибка: сторона должна быть положительной.\n";
    		    	} 
					else {
        			cout << "Площадь = " << equilateralArea(a) << "\n";
    		    	}
    		    	break;
		}
		case 6: {
    		    	cout << "Введите сторону a: ";
    		    	cin >> a;
    		    	if (a <= 0) {
        			cout << "Ошибка: сторона должна быть положительной.\n";
    		    	} 
					else {
        			cout << "Периметр = " << equilateralPerimeter(a) << "\n";
    		    	}
    		    	break;
		}
		case 7: {
    		    	cout << "Введите сторону a: ";
    		    	cin >> a;
    		    	if (a <= 0) {
        			cout << "Ошибка: сторона должна быть положительной.\n";
    		    	} 
					else {
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
