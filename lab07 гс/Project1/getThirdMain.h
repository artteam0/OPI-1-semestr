#pragma once
#include <iostream>

using namespace std;

void getThirdMain () {

  int nSymbols = 0;
  unsigned char symbol;

  cout << "Введите кол-во цифр: ";
  cin >> nSymbols;

  for (int i = 0; i < nSymbols; i++) 
  {
    cout << "Введите цифру: ";
    cin >> symbol;

    if (symbol <= 0x39 && 0x30 <= symbol) {
      int symbolCode = int(symbol);

      cout << "Код, соответствующий данной цифре: " << symbolCode << '\n';
    } else {
        cout << "Ошибка: Некорректный ввод.\n";
      }
  }
}