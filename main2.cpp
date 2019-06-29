#include <iostream>
#include <iomanip>
using namespace std;

void table(int system)

{
    int i = 0, j = 0;

    if ((system== 10)||(system == 8 )||(system == 16)) {
        cout << "ТАБЛИЦА УМНОЖЕНИЯ ДЛЯ СИСТЕМЫ С ОСНОВАНИЕМ " << system<< ":"<< endl;
        for(i = 1; i < 10; i++) {
            for(j = 2; j <= 9; j++) {
                switch(system) {
                case 8:
                    cout << oct << setw(5) << j << setw(1) << " * " << setw(2) << left << i << setw(2) << right << "=" << setw(4) << j*i;
                    break;
                case 10:
                    cout << dec << setw(5) << j << setw(1) << " * " << setw(2) << left << i << setw(2) << right << "=" << setw(3) << j*i;
                    break;
                case 16:
                    cout << hex << setw(5) << j << setw(1) << " * " << setw(2) << left << i << setw(2) << right << "=" << setw(3) << j*i;
                    break;
                }
            }
            cout << endl;
        }
    } else  cout << "Ошибка. Данное основание не поддерживается!!!"<< endl;
}

int main()
{
    int system;
    cout << "Введите основание таблицы умножения: ";
    cin >> system;
    table(system);
    return 0;
}
