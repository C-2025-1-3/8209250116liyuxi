#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float a, b, sum;
	char n;
	cin >> a >> n >> b;
    switch(n)
		{
	case'+':sum = a + b; break;
	case'-':sum = a - b; break;
	case'*':sum = a * b; break;
	case'/':
	{
		if (b != 0)sum = a / b;
		cout << "无意义" << endl;
	}break;
	case'%':int(a) % int(b); break;
	default: cout << "无意义" << endl;
		}
	cout << sum << endl;
}