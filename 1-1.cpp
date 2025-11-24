#include<iostream>
using namespace std;
int main()
{
	int k = 0, i = k + 1;//int的i应该小写，k没有定义
	cout << i++<< endl;
	i = 1;//i不能被多次定义
	cout << i++ << endl;
	cout << "welcome to c++" << endl;
	return 0;
}
