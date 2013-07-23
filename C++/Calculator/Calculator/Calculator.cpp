#include <iostream>
using namespace std;
void main()
{
	int x;
	int y;
	char z;
	char q;
	do
	{
	cout<< "Insert the numbers you would like to use";
	cin >>x;
	cin >>y;
	cout << "Acacia's Calculator \n Type the desired action: a/s/m/d";
	cin >>z;
	if (z == 'a')
	{
		cout<< x+y;
		
	}
	if (z == 's')
	{
		cout<< x-y;
	}
	if (z == 'm')
	{
		cout<< x*y;
	}
	if (z == 'd')
	{
		cout<< x/y;
	}
	cin >>q;
	cout <<"Would you like to perform another calculation? \n  Type y/n.";
	}
	while (q == 'y');

	do 
	{
		cout << "Thank you.";
	}
	while (q == 'n');



	system("PAUSE");
}
