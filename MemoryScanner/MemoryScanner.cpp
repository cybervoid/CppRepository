#include <iostream>
using namespace std;


int main()
{
	//Program to read memory not owned by the program

	char letter = 'A';
	char *anchor;

	anchor = &letter; //Anchor gets address of letter
	//Loop forever
	while(true)
	{

		cout << *anchor; //Print whatever anchor points to
		anchor++; //go to next memory cell
	}
}
