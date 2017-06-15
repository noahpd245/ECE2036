#include <iostream>
using namespace std;


int flag = 0;
int userin = 0;


int main()
{
	cout << "\n\nLet's play a game!\n\n";
	
	while (flag < 10)
	{
		cout << "Please enter any number but 5:   ";
		cin >> userin; cout << "\n\n";
	
		switch (userin)
		{
			case 5 : cout << "Hey you weren't supposed to enter 5!\n\n";
				 flag = 11; break;
			default : flag++;	
		}

	}
	
	if (flag == 10)
	{
		cout << "Well you have more patience than I do. Congratulations you beat a\n";
		cout << "minimally programmed bot at a game designed to test your gullibility.\n\n";
	}
}

