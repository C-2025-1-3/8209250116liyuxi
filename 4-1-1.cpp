#include <iostream>
using namespace std;
int main()
{
	cout << "please enter ten numbers" << endl;
	int num[10], i, j;
	bool b[10];
	for (i = 0; i < 10; i++)
	{
		cin >> num[i];
		b[i] = 1;
	}
	for(i=0;i<10;i++)
	{
		for (j = i + 1; j <= 10; j++)
		{
			if (num[j] == num[i])b[j] = 0;
		}
	}
	for (i = 0; i < 10; i++)
	{
		if (b[i] == 1)
			cout << num[i] << " ";
	}
	return 0;
}