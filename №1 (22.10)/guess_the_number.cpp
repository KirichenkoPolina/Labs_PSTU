#include <iostream> //��� �����-������
#include <cstdlib>  //��� ������� rand()
#include <ctime>    //��� ������� time()
using namespace std;


int main() {
	setlocale(LC_ALL, "Russian");   //����������� ������� ����������
	srand(time(0));
	cout << "������ ��������� ����������..." << endl;
	int i = rand() % 100 + 1;   //���������� �����
	cout << "������! �������� ������� � �� 7 �������" << endl;
	bool flag = true;   //���� ��� �������� ������������ �������� ����� ����������� 
	int k = 0;  //������� �������
	while (flag && k < 7) {
        ++k;
        cout << "������� � " << k << endl;
        int n;
        cout << "������� �������������� �����:\n";
        cin >> n;
        if (i < n) cout << "���������� ����� ������ ����������" << "\n";
        else if (i > n) cout << "���������� ����� ������ ����������" << "\n";
        else {
            cout << "�� ������ ���������� ����������. ����������!\n";
            flag = false;
        }
    }
    if (flag == true) cout << "� ���������, �� �� ������� ����� " << i << ". ���������� ��� ���.\n";
	return 0;
}