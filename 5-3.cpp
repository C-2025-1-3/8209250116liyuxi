#include <iostream>
using namespace std;
class tj
{
public:
	double length, width, height;
	tj()
	{
		length = 0;
		width = 0;
		height = 0;
	}
	void setv() {
		double l, w, h;
		cout << "请输入长方体的长宽高" << endl;
		cin >> l >> w >> h;
		length = l;
		width = w;
		height = h;
	}
	double v() {
		double v = 0;
		v = length * width * height;
		cout << "长方体的体积为： " << v << endl;
		return v;
	}
};
int main()
{
	tj c;
	for (int i = 0; i < 3; i++)
	{
		c.setv();
		c.v();
	}
	return 0;
}