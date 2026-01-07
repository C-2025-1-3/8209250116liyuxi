#include <iostream>
using namespace std;
//#include "mytemperature.h"
double celsius_to_fah(double cel)
{
	return cel * 1.8 + 32;
}
double fahrenheit_to_cels(double fah)
{
	return (fah - 32) / 1.8;
}
int main()
{
	double cel, fah;
	cout << "输入一个摄氏温度:" << endl;
	cin >> cel;
	cout << "转化为华氏温度是:" << celsius_to_fah(cel) << endl;
	cout << "输入一个华氏温度:" << endl;
	cin >> fah;
	cout << "转化为摄氏温度是:" <<fahrenheit_to_cels(fah)<< endl;
	return 0;
}
