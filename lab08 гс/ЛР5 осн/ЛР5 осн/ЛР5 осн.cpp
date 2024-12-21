#include <iostream> 
#include <windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "rus");
    unsigned char symbol;
    int option;

    do {
        cout << "1. Определение разницы значений кодов в ASCII буквы в прописном и строчном написании для символов латинского алфавита.\n";
        cout << "2. Определение разницы значений кодов в Windows-1251 буквы в прописном и строчном написании для символов русского алфавита.\n";
        cout << "3. Вывод в консоль кода символа, соответствующего введенной цифре.\n";
        cout << "4. Выход из программы.\n";
        cin >> option;

        switch (option) {
        case 1:
            cout << "Введите символ: ";
            cin >> symbol;

            if (symbol <= 0x7a && 0x41 <= symbol) {
                int UCcode = (int)toupper(symbol);
                int LCcode = (int)tolower(symbol);
                int diff = LCcode - UCcode;
                cout << "Разница значений кодов в ASCII буквы в прописном и строчном написании: " << diff << '\n';
            }
            else {
                cout << "Ошибка: введенный символ не является латинской буквой.\n";
            }
            break;

        case 2:
            cout << "Введите символ: ";
            cin >> symbol;

            if (symbol <= 0xff && 0xc0 <= symbol) {
                int UCcode = (int)toupper(symbol);
                int LCcode = (int)tolower(symbol);
                int diff = LCcode - UCcode;
                cout << "Разница значений кодов в Windows-1251 буквы в прописном и строчном написании: " << diff << '\n';
            }
            else {
                cout << "Ошибка: введенный символ не является русской буквой.\n";
            }
            break;

        case 3:
            cout << "Введите цифру: \n";
            cin >> symbol;
            if (symbol <= 0x39 && 0x30 <= symbol) {
                int symbcode = int(symbol);
                cout << "Код, соответствующий данному символу: " << symbcode << '\n';
            }
            else {
                cout << "Ошибка: Некорректный ввод.\n";
            }
            break;

        case 4:
            cout << "Программа завершена.\n";
            break;

        default:
            cout << "Ошибка: Некорректный ввод.\n";
            break;
        }

    } while (option != 4);

    return 0;
}