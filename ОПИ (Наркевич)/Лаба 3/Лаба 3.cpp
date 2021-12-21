#include <iostream>
// TachylaAleh2003 - 54 61 63 68 79 6c 61 41 6c 65 68 32 30 30 33 - Windows-1251
//					54 61 63 68 79 6c 61 41 6c 65 68 32 30 30 33 - UTF-8
//					54 00 61 00 63 00 68 00 79 00 6c 00 61 00 41 00 6c 00 65 00 68 00 32 00 30 00 30 00 33 00 - UTF-16
//					
// “очилоќлег¬€чеславович2003 - d2 ee f7 e8 eb ee ce eb e5 e3 c2 ff f7 e5 f1 eb e0 e2 ee e2 e8 f7 32 30 30 33 - Windows-1251
//					d0 a2 d0 be d1 87 d0 b8 d0 bb d0 be d0 9e d0 bb d0 b5 d0 b3 d0 92 d1 8f d1 87 d0 b5 d1 81 d0 bb d0 b0 d0 b2 d0 be d0 b2 d0 b8 d1 87 32 30 30 33 - UTF-8
//					22 04 3e 04 47 04 38 04 3b 04 3e 04 1e 04 3b 04 35 04 33 04 12 04 4f 04 47 04 35 04 41 04 3b 04 30 04 32 04 3e 04 32 04 38 04 47 04 32 00 30 00 30 00 33 00 - UTF-16
// 		
// “очило2003Aleh - d2 ee f7 e8 eb ee 32 30 30 33 41 6c 65 68 - Windows-1251
//					22 04 3e 04 47 04 38 04 3b 04 3e 04 32 00 30 00 30 00 33 00 41 00 6c 00 65 00 68 00 - UTF-8				
//					22 04 3e 04 47 04 38 04 3b 04 3e 04 32 00 30 00 30 00 33 00 41 00 6c 00 65 00 68 00 - UTF-16
int main()
{
	int number = 0x12345678;
	char hello[] = "Hello, ";
	char lfie[] = "TachylaAleh2003";
	char rfie[] = "“очилоќлег¬€чеславович2003";
	char lr[] = "“очило2003Aleh";
	wchar_t Lfie[] = L"TachylaAleh2003";
	wchar_t Rfie[] = L"“очилоќлег¬€чеславович2003";
	wchar_t LR[] = L"“очило2003Aleh";

	std::cout << hello << lfie << std::endl;
	return 0;
}