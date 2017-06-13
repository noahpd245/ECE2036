#include <iostream>
using namespace std;


struct Node
{

		
	Node(int val, Node * ptr): value(val), next(ptr) {}
	Node(): value(0), next(NULL) {}


	Node * next;
	int value;
	
};


int main()
{

	Node * startList = NULL;
	Node * currPtr = NULL;

	//create first node
	startList = new Node;
	startList->value = 2;
	startList->next = NULL;
	currPtr = startList;

	//create 2nd node
	currPtr->next = new Node(14,NULL);
	currPtr = currPtr->next; //move the currPtr to the 2nd node

	//create rest of the nodes

	currPtr->next = new Node(22, new Node(42, new Node(-100,NULL)));
			

	//print the list out
	currPtr = startList;
	
	while (currPtr != NULL)
	{

		//print out data and addresses
		cout << currPtr << ": " << currPtr->value << " ";
		currPtr = currPtr->next;	


	}	

	cout << endl;


	//MUST Clean up the heap

	currPtr = startList->next;
	while (startList != NULL)
	{
		delete startList;
			
		startList = currPtr;

		if(currPtr != NULL)
			currPtr = currPtr->next;

		
	}


} //end main
