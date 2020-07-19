/*
** Пользователь 	вводит целую часть, числитель и 	знаменатель для простой дроби.Перевести 	эту дробь в десятичную.
*/
#include <iostream>
#include <Windows.h>;
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	double a, a1, a2;
	cout << "Введите целую часть простой дроби: ";
	cin >> a;
	cout << "Введите числитель простой дроби: ";
	cin >> a1;
	cout << "Введите знаменатель простой дроби: ";
	cin >> a2;
	cout << a + a1 / a2;
	return 0;
}
