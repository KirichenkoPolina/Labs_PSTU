#include <iostream> //для ввода-вывода
#include <set> //множества
using namespace std;
set<int> BildNumber(const int& a, const int& b, const int& c) {			 //функция, которая добавляет в множество все возможные перестановки
	set<int> number;
	for (auto x : { a, b, c }) {
		for (auto x1 : { a, b, c }) {
			for (auto x2 : { a, b, c }) {
				if (x != x1 && x != x2 && x1 != x2) {
					number.insert(x * 100 + x1 * 10 + x2);
				}
			}
		}
	}
	return number;
}

int main() {
	setlocale(LC_ALL, "Rus");	//подключение русской клавиатуры
	set<int> number;	//множество вариаций 
	int n = 0;	//исходное число
	while (n < 100 || n > 999 || n % 10 == n / 100 || n % 10 == ((n / 10) % 10) || ((n / 10) % 10) == n / 100) { //проверка соответсвия условиям 
		cout << "Введите трёхзначное число с различными цифрами\n";
		cin >> n;
	}
	cout << "Различные комбинации чисел: " << endl;
	number = BildNumber(n % 10, ((n / 10) % 10), n / 100);	//вывод чисел
	for (const auto& x : number) {
		cout << x << endl;
	}
	set<int> ::iterator it = --number.end();
	cout << "Максимальное число: " << *it;	//вывод максимального числа
	return 0;
}