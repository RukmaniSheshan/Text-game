#include <iostream>
#include "Character.h"
#include "Team.h"
using namespace std;

int main() {
	/*
	Team t;
	t.count();*/

	Character dog(100, 20);
	Character cat(100, 10);

	int option;
	while ((dog.health > 0) && (cat.health > 0)) {

		option = ((rand() % 10) % 2);
		
		cout << option << endl;
		if (option == 0) { // cat attacks dog
			dog.health = dog.health - cat.damage;
			if (dog.health <= 0) {
				cout << "Dog health : " << dog.health << endl;
				cout << "Cat health : " << cat.health << endl;
				cout << "Cat won" << endl;
				getchar();
			}
			else
				cout << "Dog health : " << dog.health << endl;
		}
		else if (option == 1) {
			cat.health = cat.health - dog.damage;
			if (cat.health <= 0) {
				cout << "Cat health : " << cat.health << endl;
				cout << "Dog health : " << dog.health << endl;
				cout << "Dog won" << endl;
				getchar();
			}
			else
				cout << "Cat health : " << cat.health << endl;
		}
	}
	getchar();
}