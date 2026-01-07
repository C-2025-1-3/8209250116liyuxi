#include <iostream>
using namespace std;
void qipao(double a[])
{
	double temp;
	for (int i = 0; i < 10; i++)
	{
		for (int j = i; j < 10; j++)
		{
			if (a[j] < a[i])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}
int main()
{
	double num[10];
	for (int i = 0; i < 10; i++)
	{
		cin >> num[i];
	}
	qipao(num);
	for (int i = 0; i < 10; i++)
	{
		cout << num[i] << " ";
	}
	return 0;
}