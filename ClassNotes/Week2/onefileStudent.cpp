#include <iostream>
#include <string>

using namespace std;


enum sexType { male, female }; //method of only allowing these values for a variable




class Student
{
	public:

	Student();
	Student(string, int, float, sexType);
	
	bool AcadProb();
	void display();	

	private:
	
	string name;
	int idNum;
	float GPA;
	sexType sex;


}; //end of class



Student::Student(string _name, int _idNum, float _GPA, sexType _sex):  //constructor initialization
	 name(_name), idNum(_idNum), GPA(_GPA), sex(_sex) { cout << "Constructor is called" << endl; }  //variable association

Student::Student(): name("******"), idNum(0), GPA(0.0), sex(female) {}



bool Student::AcadProb()
{
	if (GPA < 2.0)
		return true;
	else
		return false; //Single line if el statements don't need {}

} 


void Student::display()
{
	cout << "Name : " << name << endl;
	cout << "idNum : " << idNum << endl;
	cout << "GPA : " << GPA << endl;
	cout << "Sex : ";

	if (sex == male)
		cout << "male" << endl;
	else
		cout << "female" << endl;
}



int main()
{

	Student Anthony("Anthony Braswell", 123456789, 4.0, male);
	Student Noah("Noah Daugherty", 987654321, 4.0, male);
	Student StudentList[45];
	

	Anthony.display();



} // end of main
