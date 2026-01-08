#include <iostream>
using namespace std;
class Time 
{
private:
	int hour;
	int minute;
	int sec;
public:
	void set()
	{
		cin >> hour >> minute >> sec;
		cout << hour << ":" << minute <<":" << sec << endl;
	}
};
int main()
{
	Time t;
	t.set();
	return 0;
}