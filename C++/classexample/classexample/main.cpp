#include "cow.h";


void main ()
{
	Cow bessie = Cow();

	cout << bessie.age <<endl;
	cout << bessie.weight << endl;

	bessie.move();
	bessie.moo();//is a function//

	cout << bessie.age << endl; //is a variable//
	cout << bessie.weight << endl;
	system("PAUSE");
}