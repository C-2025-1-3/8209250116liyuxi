#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	char n;
	cin >> n;
	if (int(n) >= 97 && int(n) <= 122)
		cout << char(n - 32) << endl;
	else
		cout << int(n)<<endl;
	return 0;
}