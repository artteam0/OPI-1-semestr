#include <iostream>
using namespace std;

int main() {
	setlocale(LC_CTYPE, "rus");
	int option;

	do {
		cout << "1. Пойти направо.\n";
		cout << "2. Пойти налево.\n";
		cout << "3. Пойти прямо.\n";
		cout << "4. Думай.\n";
		cin >> option;

		switch (option) {
		case 1:
			cout << "Направо пойдёшь - коня потеряешь, себя спасёшь.\n";
			break;
		case 2:
			cout << "Налево пойдёшь - коня спасёшь, себя потеряешь.\n";
			break;
		case 3:
			cout << "Прямо пойдёшь - и себя и коня потеряешь.\n";
			break;
		}
	} while (option != 4);
}