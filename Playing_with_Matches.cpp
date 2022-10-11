#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	int n[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
	while (t--)
	{
		int a, b;
		cin >> a >> b;
		int matches = 0;
		a = a + b;
		while (a > 0)
		{
			matches = matches + n[a % 10];
			a = a / 10;
		}
		cout << matches << endl;
	}
	return 0;
}
