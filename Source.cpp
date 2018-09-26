#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include <Windows.h>
#include "Prime.h"
#include "Search_in_array.h"
#define prime 1

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251); // нужен для правильно записи в файл
	SetConsoleOutputCP(1251); // нужен при работе с консолью
	char name[100];
	ofstream out_file("out.txt", ios::out);
	cin.getline(name, 100);
	char * p, *context;
	p = strtok_s(name, " ", &context);
	while (p)
	{
		out_file << p<<endl;
		p = strtok_s(context, " ", &context);
		
	}
	

//#if prime < 1
//	int x;
//	cin >> x;
//	cout << IsPrime(x) << endl;
//#endif
//#if prime < 2
//	int a[5] = { 5,7,12,89,32 };
//	cout << PrimesInArray(a, 5) << " ";
//#endif
//

	cout << endl;
	system("pause");
	return 0;

}