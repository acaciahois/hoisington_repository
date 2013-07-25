#include <iostream>
#include <string>
using namespace std;

class Toucan
{
public:
	double weight;

	int age;
	int feathers;
	int talons;
	int colorsofbeak;
	int amtofego;

	bool isAwesome;
	bool knowsSpanish;
	bool knowsEnglish;
	bool knowsDutch;

	string name;

	Toucan (); //default constructor//
	Toucan (string newName, double newWeight, int newAge, int colorsofbeak, bool knowsEnglish); //contructor//

	void fly();
	void caw ();

};