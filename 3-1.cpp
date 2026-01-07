#include <iostream>
using namespace std;
int sum1(int m, int n)
{
	int Y, i;
	Y = min(m, n);
	for (i = 1; i < m && i < n; i++)
	{
		if (m % Y == 0 && n % Y == 0)break;
		else Y--;
	}
	return Y;
}
int sum2(int m, int n)
{	
	int B, i;
	B = max(m, n);
	for (i = 1; i>m&&i>n; i++)
	{
		if (B % m == 0 && B % n == 0)break;
		else B++;
	}
	return B;
}
int main()
{
	int m, n, Y, B;
	cin >> m >> n;
	Y = sum1(m, n);
	B = sum2(m, n);
	cout << "最大公约数为" << Y << endl;
	cout << "最小公倍数为" << B << endl;
	return 0;
}