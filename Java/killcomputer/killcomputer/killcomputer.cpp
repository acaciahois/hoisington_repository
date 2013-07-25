#include <iostream>
using namespace std;

void Hi ()
{
	cout << "Hi";
	Hi();
	system("PAUSE");
}
void main ()
{
	Hi();
	system("PAUSE");
}