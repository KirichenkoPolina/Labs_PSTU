﻿#include <iostream>	//ввод-вывод
using namespace std; //пространство имён

int main() {	//основная функция
	setlocale(LC_ALL, "Russian");	//подключаем русский язык
	float g;	//создаём переменную
	cout << "Введите количество галлонов\n";	//вывод
	cin >> g;	//ввод
	cout << "Объём в кубических футах равен " << g / 7.481;	//вывод
	return 0;
}