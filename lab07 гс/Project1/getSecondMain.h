#pragma once
#include <iostream>
#include <windows.h>

using namespace std;

void getSecondMain () {

  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);

  int nSymbols = 0;
  unsigned char symbol;

  cout << "������� ���������� ��������: ";
  cin >> nSymbols;

  for (int i = 0; i < nSymbols; i++) 
  {
    cout << "������� ������: ";
    cin >> symbol;

    if (symbol <= 0xff && 0xc0 <= symbol) {
      int upperCode = (int)toupper(symbol);
      int lowerCode = (int)tolower(symbol);
      int difference = lowerCode - upperCode;

      cout << "������� �������� ����� � Windows-1251 ����� � ��������� � �������� ���������: " << difference << '\n'; 
    } else {
        cout << "������: ��������� ������ �� �������� ������� ������.\n"; 
      }
  }
}