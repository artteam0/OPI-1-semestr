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
	  cout << "1. Определение разницы значений кодов в ASCII буквы в прописном и строчном написании для символов латинского алфавита.\n";
      cout << "2. Определение разницы значений кодов в Windows-1251 буквы в прописном и строчном написании для символов русского алфавита.\n";
	  cout << "3. Вывод в консоль кода символа, соответствующего введенной цифре.\n";
	  cout << "4. Выход из программы.\n";
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