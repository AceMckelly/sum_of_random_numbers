// addition_test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <time.h>

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	cout << "--------------------\n";
	cout << "Addition Test\n";
	cout << "--------------------\n";
	srand(time(NULL));
	int num1 = rand() % 1000;
	int num2 = rand() % 1000;
	int sum = num1 + num2;
	int ans;
	cout << num1 << "+" << num2 << "=";
	cin >> ans;
	if (ans == sum)
		cout << "Correct\n";
	else{
		cout << "Wrong\n";
		cout << "Yeah I know you are tired.\n";
	}
	system("pause");
	return 0;
}

