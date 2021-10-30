#include <iostream> //для ввода-вывода
#include <cstdlib>  //для функций rand()
#include <ctime>    //для функции time()
using namespace std;


int main() {
    setlocale(LC_ALL, "Russian");   //подключение русской клавиатуры
    srand(time(0));
    cout << "Создаю рандомную переменную..." << endl;
    int i = rand() % 100 + 1;   //загаданное число
    cout << "Готово! Попробуй угадать её за 7 попыток" << endl;
    bool flag = true;   //флаг для проверки соответствия введёного числа загаданному 
    int k = 0;  //счётчик попыток
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