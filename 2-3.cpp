#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	int x,y,z,sum;
	cout << "请输入三角形的三条边长：" << endl;
	cin >> x>> y>> z;
	if(x + y > z && x + z > y && y + z > x)
	sum = x + y + z;
	   if (x == y || y == z || x == z)cout << "三角形周长是：" << sum << "且三角形为等腰三角形" << endl;
	    else cout << "三角形周长为：" << sum << "但三角形不是等腰三角形" << endl;
	return 0;
}