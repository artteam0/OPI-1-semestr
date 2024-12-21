//KuliashovArtsiom2005
// Windows-1251: 4b00 7500 6c00 6900 6100 7300 6800 6f00 7600 4100 7200 7400 7300 6900 6f00 6d00 3200 3000 3000 3500 0000
// UTF-8: 4B 75 6C 69 61 73 68 6F 79 41 72 74 73 69 6F 6D 32 30 30 35
// UTF-16: 4b 75 6c 69 61 73 68 6f 76 41 72 74 73 69 6f 6d 32 30 30 35 00

// КулешовАртем2005
// Windows-1251: 1a04 4304 3b04 3504 4804 3e04 3204 1004 4004 4204 3504 3c04 3200 3000 3000 3500 0000
// UTF-8: D09A D183 D0BB D0B5 D188 D0BE D0B2 D090 D180 D182 D0B5 D0BC 32 30 30 35
// UTF-16: ca f3 eb e5 f8 ee e2 c0 f0 f2 e5 ec 32 30 30 35 00

// Кулешов2005Artsiom
// Windows-1251: 1a04 4304 3b04 3504 4804 3e04 3204 3200 3000 3000 3500 4100 7200 7400 7300 6900 6f00 6d00 0000
// UTF-8: D09A D183 D0BB D0B5 D188 D0BE D0B2 32 30 30 35 41 72 74 73 69 6F 6D
// UTF-16: ca f3 eb e5 f8 ee e2 32 30 30 35 41 72 74 73 69 6f 6d 00
 
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "rus");
	int number = 0x12345678;
	char hello[] = "Hello, ";
	char lfie[] = "KuliashovArtsiom2005"; 
	char rfie[] = "КулешовАртем2005"; 
	char lr[] = "Кулешов2005Artsiom"; 

	wchar_t Lfie[] = L"KUliashovArtsiom2005"; 
	wchar_t Rfie[] = L"КулешовАртем2005";
	wchar_t LR[] = L"Кулешов2005Artsiom";
	cout << hello << lfie << endl;
	return 0;
}