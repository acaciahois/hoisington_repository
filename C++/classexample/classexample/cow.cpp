#include "cow.h";

Cow::Cow ()
{
	weight = 3;
	litersofmilk = 90;
	speed = .01;

	numOfSpots =  327;
	age = 1001;
	loudness = 8999;
	
	isBull = false;
	name = "FreddieD";
}

Cow::Cow(string newName, double newWeight, int newAge, bool newisBull)
{
	name = newName;
	weight = newWeight;
	age = newAge;
	isBull = newisBull;
}
void Cow::move ()
{
	speed += .01;
	age++;
	weight -= 15;
	cout << "The cow has moved." <<endl;
}
void Cow::moo()
{
	cout << "MOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO";
	loudness *= 9500;
	weight -= 2349875;
}