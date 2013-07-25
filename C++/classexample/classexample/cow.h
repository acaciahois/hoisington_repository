#include <iostream>
#include <string>
using namespace std;

class Cow
{
public:
	double weight;
	double litersofmilk;
	double speed;

	int age;
	int loudness;
	int numOfSpots;

	bool isBull;

	string name;

	Cow (); //default constructor//
	Cow (string newName, double newWeight, int newAge, bool newisBull); //constructor//

	void move();
	void moo();

};