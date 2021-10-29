#include <iostream>
#include <cstdlib> 
#include <ctime>
using namespace std;


int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	cout << "Создаю рандомную переменную..." << endl;
	int i = rand() % 100 + 1;
    cout << i << endl;
	cout << "Готово! Попробуй угадать её за 7 попыток" << endl;
	bool flag = true;
	int k = 0;
	while (flag && k < 7) {
        ++k;
        cout << "Попытка № " << k << endl;
        int n;
        cout << "Введите предполагаемое число:\n";
        cin >> n;
        if (i < n) cout << "Загаданное число меньше введенного" << "\n";
        else if (i > n) cout << "Загаданное число больше введенного" << "\n";
        else {
            cout << "Ты угадал загаданную переменную. Поздравляю!\n";
            flag = false;
        }
    }
    if (flag == true) cout << "К сожалению, вы не угадали число " << i << ". Попробуйте ещё раз.\n";
	return 0;
}