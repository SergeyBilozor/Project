// ConsoleApplication9.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "time.h"
#include "windows.h"
#include "iostream"

using namespace std;

int main()
{
	int A[10];
	srand(time(NULL));
	for (int i = 0; i < 10; i++)
	{
		A[i] = rand() % 21;
		cout <<"A["<< i <<"] = "<< A[i] << endl;
	}
	cout << "Elementy kratnie 6:" << endl;
	for (int i = 0; i < 10; i++)
	{
		if (A[i] % 6 == 0)
		{
			cout << "A[" << i << "] = " << A[i] << endl;
		}
	}
	int max = A[0];
	for (int i = 0; i < 10; i++)
	{
		if (A[i] > max)
		{
			max = A[i];
		}
	}
	cout << "Max element = " << max << endl;
	system("pause");
	return 0;
}

