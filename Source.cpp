#include <iostream>
using namespace std;
class lift
{
	int flat = 1;
	
	bool switchl = true;

public:
	bool getswitch() {
		return switchl;
	}
	void printmenu() {

		cout << "\n MENU "
			"\nYour flat: " << flat <<
			"\nStatus of lift: " << switchl <<
			"\n\n1) Up Flat   \t3) Switch On lift"
			"\n2) Down Flat   \t4) Switch Off lift\n\n"
			"5)How to check if lift is working?\n";
	}
	int getflat() {
		return flat;
	}
	void flatup() {
		if (flat < 2)
			flat += 1;
		else
			cout << "\nYou reached the maximum flat of the building!";
	}

	void flatdown() {
		if (flat > 0)
			flat -= 1;
		else
			cout << "\nYou're already on the ground floor!";
	}
	int switchon() {
		return switchl = true;
	}
	int switchoff() {
		return switchl = false;
	}
	bool checkswitc() {
		return switchl;
	}
};


void main() {
	lift l;
	int choice;
	do
	{
		l.printmenu();
		cout << "\nEnter your choice: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			if (l.checkswitc() == false)
			{
				cout << "Lift is closed for tech reasons!";
			}
			else
			{
				cout << "\nYour flat before your choice :" << l.getflat() << "\n";
				l.flatup();
				cout << "\nYour flat after your choice :" << l.getflat() << "\n";
			}
			
			
			break;
		case 2:
			if (l.checkswitc() == false)
			{
				cout << "Lift is closed for tech reasons!";
			}
			else
			{
				cout << "\nYour flat before your choice :" << l.getflat() << "\n";
				l.flatdown();

				cout << "\nYour flat after your choice :" << l.getflat() << "\n";
				if (l.getflat() == 0)
				{
					cout << "\nYou returned to zero floor! ";
				}
			}
			
			break;
		case 3:
			l.switchon();
			cout << "\nYou turn on lift!";
			break;
		case 4:
			l.switchoff();
			cout << "\nYou turn off lift!";
			break;
		case 5:
			cout << "\nYou can check the status of lift in main menu,\nif status of lift equal 1 its working,\nif status equal 0 it isnt working for such reasons!\n";
		default:
			break;
		}
	} while (true);
}