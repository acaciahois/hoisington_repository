#include "toucan.h"

void main ()
{
	Toucan def = Toucan ();

	cout << def.feathers << endl;
	cout << def.colorsofbeak <<endl;
	cout << def.isAwesome <<endl;

	def.fly ();
	def.caw();

	cout << def.feathers <<endl;
	cout << def.colorsofbeak <<endl;
	cout << def.isAwesome <<endl;
	system("PAUSE");
}