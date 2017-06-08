

//Conditional Operator
(Condition ? implement_if_true : implement_if_false_)

//Switch Statements
switch (variable)
{
	case value1:
		//statements;
		break;
	case value2:
		//statements;
		break;
	default:
		//default statments
}



//System commands
system("clear") // prints out a command to the terminal


// DO LOOP

do
{
	// body
} while(condition);	//can be used for somehting like an input. WILL ALWAYS RUN ONCE


//RANDOM NUMBERS

#include <cstdlib> //rand is located in this library

rand() //gives list of random numbers from 0 -> large

srand(time(0)); //seed 
(rand() % 6)  //% mod function. returns the remainder of a division operation


//FOR LOOP

for (int counter = 1; counter <= 10; counter ++)  // counter is only accessible in the for loop
{
	//body
};


//DEFINE

#define FALSE 0 //define constants with preprocessor directive
#define TRUE 1


