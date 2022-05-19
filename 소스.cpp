#include <iostream>
using namespace std;

void binary(int n)
{
	if (n <= 0)
		return;
	binary(n >> 1);
	int t = n & 1;
	cout << t;
}
int main()
{
	int n;
	cin >> n;
	if (n == 0)
		cout << 0;
	else
		binary(n);
	return 0;
}