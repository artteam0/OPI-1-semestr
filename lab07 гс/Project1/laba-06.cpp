#include <iostream>
#include <windows.h>

#include "getFirstMain.h"
#include "getSecondMain.h"
#include "getThirdMain.h"
#include "getFourthMain.h"
#include "getDefaultMain.h"

using namespace std;

int main () {

  setlocale (LC_CTYPE, "Rus");

  int option;

    do {
	  cout << "1. ����������� ������� �������� ����� � ASCII ����� � ��������� � �������� ��������� ��� �������� ���������� ��������.\n";
      cout << "2. ����������� ������� �������� ����� � Windows-1251 ����� � ��������� � �������� ��������� ��� �������� �������� ��������.\n";
	  cout << "3. ����� � ������� ���� �������, ���������������� ��������� �����.\n";
	  cout << "4. ����� �� ���������.\n";
	  cin >> option;

	  switch (option) {

	    case 1: 
		  getFirstMain ();
		  break;
		
	    case 2: 
		  getSecondMain ();
		  break;
			
		case 3: 
		  getThirdMain ();
	      break;
			
		case 4: 
	      getFourthMain ();
		  break;
			
		default: 
		  getDefaultMain();
		  break;
	  }
	} while (option != 4);
}