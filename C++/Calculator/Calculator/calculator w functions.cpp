#include <iostream>
using namespace std;


double add (double x, double y)
{
	return x+y;
}
double subtract (double x, double y)
{
	return x-y;
}
double multiply (double x, double y)
{
	return x*y;
}
double divide (double x, double y)
{
	return x/y;
}




void main ()
{
	int x;
	int y;
	int a;

	char z, t;
	do
	{
		cout<< "Enter 1st #:  ";
		cin >> x;
		cout<< "Enter 2nd #: ";
		cin>>y;
		cout<<endl<<endl;
		cout<< "Enter operation (a/s/m/d)";
		cin>>z;



		cout<<endl;
		if (z=='a' || z== 'A')
		{cout <<a = add (x+y) <<endl <<endl;
		}
		else if (z =='s' || z=='S')
		{cout << a = subtract(x-y) <<endl <<endl;
		}
		else if (z =='m' || z=='M')
		{cout << multiply (x*y) <<endl <<endl;
		}
		else if (z =='d' || z=='D')
		{cout << divide(x/y) <<endl <<endl;
		}
		cout << "Would you like to perform another calculation?";
		cin>> t;
	}
	while (t == 'y' || t =='Y');
}