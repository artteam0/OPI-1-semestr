#pragma once
#include <iostream>
#include <cctype>

using namespace std;

void getFirstMain () {

  int nSymbols = 0;
  unsigned char symbol;

  cout << "Введите количество символов: ";
  cin >> nSymbols;

  for (int i = 0; i < nSymbols; i++) {
    cout << "Введите символ: ";
    cin >> symbol;

    if (symbol <= 0x7a && 0x41 <= symbol) {
      int upperCode = (int)toupper(symbol);
      int lowerCode = (int)tolower(symbol);
      int difference = lowerCode - upperCode;

      cout << "Разница значений кодов в ASCII буквы в прописном и строчном написании: " << difference << '\n';
    } else {
        cout << "Ошибка: введенный символ не является латинской буквой.\n";
      }
  }
}