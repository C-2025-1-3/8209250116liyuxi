#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	int x = max(a, b);
	int y = min(a, b);
	while (x % a != 0 || x % b != 0)x++;
	while (a % y != 0 || b % y != 0)y--;
	cout << "最小公倍数为：" << x << "最大公约数为：" <<y<< endl;
	return 0;
}