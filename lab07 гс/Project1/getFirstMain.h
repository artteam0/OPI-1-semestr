#pragma once
#include <iostream>
#include <cctype>

using namespace std;

void getFirstMain () {

  int nSymbols = 0;
  unsigned char symbol;

  cout << "������� ���������� ��������: ";
  cin >> nSymbols;

  for (int i = 0; i < nSymbols; i++) {
    cout << "������� ������: ";
    cin >> symbol;

    if (symbol <= 0x7a && 0x41 <= symbol) {
      int upperCode = (int)toupper(symbol);
      int lowerCode = (int)tolower(symbol);
      int difference = lowerCode - upperCode;

      cout << "������� �������� ����� � ASCII ����� � ��������� � �������� ���������: " << difference << '\n';
    } else {
        cout << "������: ��������� ������ �� �������� ��������� ������.\n";
      }
  }
}