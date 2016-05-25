#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <stdlib.h>
#include "RevolveGroup.h"
using namespace std;

void TestMin()
{
	int a1[] = { 3, 4, 5, 1, 2 };
	int a2[] = { 1, 0, 1, 1, 1 };
	int a3[] = { 1, 1, 1, 0, 1 };

	int ret1 = Min(a1, sizeof(a1) / sizeof(a1[0]));
	int ret2 = Min(a2, sizeof(a2) / sizeof(a2[0]));
	int ret3 = Min(a3, sizeof(a3) / sizeof(a3[0]));

	cout << "a1[min] = " << ret1 << endl;
	cout << "a2[min] = " << ret2 << endl;
	cout << "a3[min] = " << ret3 << endl;
}

int main()
{
	TestMin();

	system("pause");
	return 0;
}
