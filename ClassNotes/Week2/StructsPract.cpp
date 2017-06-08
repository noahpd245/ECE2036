#include <iostream>
using namespace std;

struct ComplexNum
{
	//x+jy
	float x = 1;
	float y = 1;
};

void display (ComplexNum inputNum)
{
	std::cout << inputNum.x << " + " << inputNum.y << "j" << endl;
}

int main ()
{
	ComplexNum num1;
		num1.x = 1.0;
		num1.y = 3.0;
	display(num1);
}
