#ifndef MAXMIN_H
#define MAXMIN_H

class MaxMin
{
private:
	int max;
	int min;

public:
	MaxMin();
	int getMax();
	int getMin();

	void calculateMax(int num[], int n);
	void calculateMin(int num[], int n);
};
#endif 