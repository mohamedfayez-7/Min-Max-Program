#include "MaxMin.h"

	MaxMin::MaxMin()
	{
		max = 0;
		min = 0;
	}

	int MaxMin::getMax()
	{
		return max;
	}

	int MaxMin::getMin()
	{
		return min;
	}

	void MaxMin::calculateMax(int num[], int n)
	{
		max = num[0];
		for (int i = 1; i < n; i++)
		{
			if (num[i] > max)
			{
				max = num[i];
			}
		}
	}

	void MaxMin::calculateMin(int num[], int n)
	{
		min = num[0];
		for (int i = 1; i < n; i++)
		{
			if (num[i] < min)
			{
				min = num[i];
			}
		}
	}



