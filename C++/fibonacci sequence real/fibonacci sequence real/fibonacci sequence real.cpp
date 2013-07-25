#include <iostream>
using namespace std;


int fib(int n)
{
	if (n<=2)
	{
		return 1;
	}
	else if (n<=2)
	{
		return 1;
	}
	else
	{
		return fib(n-1) + fib (n-2);
	}
}

void main()
{
	int index, x;
	cin>> index;
	x = fib(index);
	cout << x;
	system("PAUSE");
}

