#include<iostream>
using namespace std;
class point
{
private:
	int x, y;
public:
	point(int X = 60, int Y = 80)
	{
		x = X;
		y = Y;
	}
	void setpoint(int i, int j)
	{
		x = x + i;
		y = y + j;
	}
	void display()
	{
		cout << "(" << x << "," << y << ")" << endl;
	}
};
int main()
{
	point n;
	int i, j;
	cin >> i >> j;
	n.setpoint(i, j);
	n.display();
	return 0;
}