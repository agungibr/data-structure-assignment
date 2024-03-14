#include <iostream>
using namespace std;

struct figure {
	string name;
	int age;

};

class character {
	public:
		string species;
		string citizenship;
		string pets;
};

int main() {
	struct figure one;

	one.name = "Patrick Star";
	one.age = 18;

	cout << "=====STRUCT=====" << endl;
	cout << "Name: " << one.name << endl;
	cout << "Age: " << one.age << endl;

	character two;

	two.species = "Starfish";
	two.citizenship = "Bikini Bottom";
	two.pets = "Rocky, Ouchie, Tinkle, Fabio";

	cout << "=====CLASS=====" << endl;
	cout << "Species: " << two.species << endl;
	cout << "Citizenship: " << two.citizenship << endl;
	cout << "Pets: " << two.pets << endl;

	return 0;
}