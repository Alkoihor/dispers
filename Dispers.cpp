#include <iostream>
#include <stdio.h>
#include <fstream>
#include <windows.h>
#include <string.h>
using namespace std;
void main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	double n, m, D;
	ifstream f("Vvid.txt");
	f >> n >> m;
	if (n == 0)
	{
		cout << "Загальна кількість елементів не може бути рівною нулю";
	}
	else
	{
		D = (m / n)*(1 - m / n);
		cout << "Дисперсія альтернативної ознаки рівна " <<D<<endl;
	}
}
