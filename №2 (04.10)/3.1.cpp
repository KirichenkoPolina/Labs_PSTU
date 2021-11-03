#include <iostream>	//ввод-вывод
using namespace std; //пространство имён

int main() {	//основная функция
	setlocale(LC_ALL, "Russian");	//подключаем русский язык
	float a, b;	//создаём переменные
	cout << "Введите два числа\n";	//вывод
	cin >> a >> b;	//ввод
	cout << "Их произведение равно " << a * b;	//вывод
	return 0;
}