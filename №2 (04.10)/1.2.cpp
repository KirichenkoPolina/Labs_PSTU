#include <iostream>	//ввод-вывод
using namespace std; //пространство имён

int main() {	//основная функция
	int const a = 10;	//создаём переменную
	int b;	//создаём переменную
	cout << a << endl;	//вывод
	cout << (b = 20) << endl;	//вывод
	cout << --b << endl;	//вывод
	return 0;
}