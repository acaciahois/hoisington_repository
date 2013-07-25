#include "toucan.h";

Toucan::Toucan ()
{
	weight = 500;

	age = 5376;
	feathers = 30000512;
	talons = 10;
	colorsofbeak = 500000001;
	amtofego = 555;

	isAwesome = true;
	knowsSpanish = true;
	knowsEnglish = true;
	knowsDutch = true;

	name = "Lord Ferdinand";
}

Toucan::Toucan(string newName, double newWeight, int newAge, int newcolorsofbeak, bool newknowsEnglish)
{
	name = newName;
	weight = newWeight;
	age = newAge;
	colorsofbeak = newcolorsofbeak;
	knowsEnglish = newknowsEnglish;
}
void Toucan::fly()
{	
	weight -= 115;
	colorsofbeak *= 456;
	amtofego *= 57;
	cout << "The toucan has flown. And returned to his devoted peasants." <<endl;
}
void Toucan::caw()
{
	weight -= 145;
	amtofego *43;
	cout << "How dare you argue in front of the king." << endl;
	cout << "Thy Majesty demands SILENCE." <<endl;
}




