#include <iostream>
using namespace std;

int drinknum = 0;


int main ()
{

	cout << "\n\nAh, I see you are a thirsty man. How about a drink?\n\n";
	cout << "What kind of drink would you like?\n";
	cout << "1 - Sweet Tea\n";
	cout << "2 - Root Beer\n";
	cout << "3 - Sprite\n";
	cout << "4 - Water\n";
	cout << "5 - Unsweet tea\n";

	cout << "\nPlease enter a number: ";
	cin >> drinknum; cout << "\n";

	if (drinknum >= 1 && drinknum <= 4)
	{
		cout << "*clink* *rumble* *thud*\n";
	}

	switch (drinknum)
	{
		case 1 : cout << "Here is your Sweet Tea. Excellent Choice!\n\n"; break;
		case 2 : cout << "Here is your Root Beer. Enjoy!\n\n"; break;
		case 3 : cout << "Here is your Sprite. Enjoy your day.\n\n"; break;
		case 4 : cout << "Here is your water... kinda boring aren't you?\n\n"; break;
		case 5 : cout << "Leave... don't every come back to this vending machine you monster.\n\n"; break;
		default : cout << "Sorry but that's not a valid entry. Here is your money back. :)\n\n";

	}

	drinknum = 0;

}
