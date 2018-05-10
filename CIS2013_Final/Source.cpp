#include <iostream>
#include <string>
using namespace std;


class motorcycle {
	string color, make, model;
	int year;

public:
	motorcycle() {
		year = 2018;
		make = "Honda";
		model = "Runner";
		color = "red";
	}

	void getMotorcycleInfo() {
		cout << "You have a " << color << ", " << year << " " << make << " " << model << ".\n\n";
	}

	int changeYear(int yr){
		year = yr;
		return year;
	}
	string changecolr(string colr) {
		color = colr;
		return color;
	}
	string changemke(string mke) {
		make = mke;
		return make;
	}
	string changemdl(string mdl) {
		model = mdl;
		return model;
	}
};


int main() {
	bool cont = true;
	char select;
	int	tempint;
	string temp;
	motorcycle bike;
	while (cont){
		cout << "Build your bike!\nWould you like to:\nA)View current motorcycle.\nB)Change year.\nC)Change color.\nD)Change make.\nE)Change model\nX)Exit\n";
		cin >> select;
		if (select == 'a') {
			bike.getMotorcycleInfo();
		}
		else if (select == 'b') {
			cout << "Enter new year:\n";
			cin >> tempint;
			cout << "The bikes year is now " << bike.changeYear(tempint) << endl << endl;	
		}
		else if (select == 'c') {
			cout << "Enter new color:\n";
			cin >> temp;
			cout << "The bikes year is now " << bike.changecolr(temp) << endl << endl;
		}
		else if (select == 'd') {
			cout << "Enter new make:\n";
			cin >> temp;
			cout << "The bikes year is now " << bike.changemke(temp) << endl << endl;
		}
		else if (select == 'e') {
			cout << "Enter new model:\n";
			cin >> temp;
			cout << "The bikes year is now " << bike.changemdl(temp) << endl << endl;
		}
		else if (select == 'x') {
			cont = false;
		}
		else {
			cout << "Invalid command.";
		}
	}

	return 0;
}