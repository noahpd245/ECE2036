#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

	double T; //This is a temperature

	cout << "Please enter the current temperature in Farenheit: ";
	cin >> T;

	cout << fixed << setprecision(3) << "Temperature : " << "F" << endl;
	//cout << scientific << setprecision(3) << printout << T << F

	if (T >= 60 && T <= 100)
		cout << "It is a nice day! " << endl;
	else if (T >= 35 && T < 60)
		cout << "It is a little nippy! " << endl;
	else if (T > 100 && T <= 120)
		cout << "Oh boy! It's hot!" << endl;
	else if (T >= -40 && T < 35)
		cout << "I can't feel my toes!" << endl;
	else
		cout << "Are yo sure you are on planet earth?" << endl;

	return 0;

}

