#include <iostream>
#include <cstring>
using namespace std;
int indexOf(const char s1[], const char s2[])
{
	int l1 = strlen(s1);
	int l2 = strlen(s2);
	int i, j, n = 0;
	for (i = 0; i < l2; i++)
	{

		if(s2[i]==s1[0])
		{
			for (j = 0; j < l1; j++)
			{
				if (s2[i + j] == s1[j])n++;
				else
				{
					n = 0;
					break;
				}
			}
		}
		if (n == 1)break;
	}
	if (n == l1)return i;
	else return -1;
}
int main()
{
	char a[100], b[100];
	int num;
	cout << "Enter the first string:" << endl;
	cin >> a;
	cout << "Enter the second string:" << endl;
	cin >> b;
	num = indexOf(a, b);
	if (num == -1)cout << "s1 is not a substring of s2" << endl;
	else cout << "s1 is a substring of s2!index is:" << num << endl;
}