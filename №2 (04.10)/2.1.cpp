#include <iostream>	//ввод-вывод
using namespace std; //пространство имён

int main() {	//основная функция
	setlocale(LC_ALL, "Russian");	//подключаем русский язык
	float F;	//создаём переменную
	cout << "Введите температуру в градусах по Фаренгейту(F)\n";	//вывод
	cin >> F;	//ввод
	cout << "Температура по Цельсию равна " << ((float(5) / 9) * (F - 32));	//вывод
	return 0;
}