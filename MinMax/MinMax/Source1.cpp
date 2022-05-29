#include"MaxMin.h"
#include<iostream>
using namespace std;

void main()
{
	int numbers[5];
	cout << "Enter 5 numbers and get the max and min number";
	for (int i = 0; i < 5; i++)
	{
		cin >> numbers[i];
	}

	MaxMin obj;

	obj.calculateMax(numbers, 5);
	obj.calculateMin(numbers, 5);

	cout << obj.getMax() << endl << obj.getMin();

	system("pause");
}

