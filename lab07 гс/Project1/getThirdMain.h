#pragma once
#include <iostream>

using namespace std;

void getThirdMain () {

  int nSymbols = 0;
  unsigned char symbol;

  cout << "������� ���-�� ����: ";
  cin >> nSymbols;

  for (int i = 0; i < nSymbols; i++) 
  {
    cout << "������� �����: ";
    cin >> symbol;

    if (symbol <= 0x39 && 0x30 <= symbol) {
      int symbolCode = int(symbol);

      cout << "���, ��������������� ������ �����: " << symbolCode << '\n';
    } else {
        cout << "������: ������������ ����.\n";
      }
  }
}