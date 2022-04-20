#include <iostream>
using namespace std; 

string inventory[4] = {};

int main() {
	srand(time(NULL));

	int room = 1;
	string input;

	do {
		switch (room) {
		case 1:
			cout << "room 1, you can go 'S'outh There is a key you can 'grab' it" << endl;
			cin >> input;
			if (input == "S")
				room = 2;
			else if (input.compare("grab") == 0)
				inventory[0] = "key";
			else 
				cout <<"not there" << endl;
			break;
		case 2:
			cout << "inventory: ";
			for (int i = 0; i < 1; i++)
				cout << inventory[i] << endl;

			cout << "room 2 you can go 'W'est or 'E'ast or 'N'orth or 'S'outh" << endl;
			cin >> input;
			if (input == "N")
				room = 1;
			else if (input == "W")
				room = 3;
			else if (input == "S")
				room = 5;
			else if (input.compare("W")) {
				if (inventory[0].compare("key") != 0)
					cout << "door is locked" << endl;
				else
					room = 4;
			}
			else
				cout << "not there" << endl;
			


			break;
		case 3:
			cout << "room 3 you can go 'E'ast" << endl;
			if (input == "E")
				room = 2;
			else
				cout << "not there" << endl;
			break;
		case 4:
			cout << "room 4 youb can go 'W'est" << endl;
			cin >> input;
			if (input == "W")
				room = 3;
			else
				cout << "not there" << endl;
			break;
		case 5:
			cout << "room 5 you can go 'N'orth" << endl;
			cin >> input;
			if (input == "N")
				room = 3;
			else
				cout << "not there" << endl;
			break;
		}

	} while (input != "q");
}


