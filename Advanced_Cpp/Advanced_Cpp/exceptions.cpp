// Advanced_Cpp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;


void mightGoWrong()
{
	bool error1 = false;
	bool error2 = true;
	if (error1) {
		throw "something went wrong";
	}
	if (error2) {
		throw string("something else want wrong");
	}


}

int myvar = 60;

void ScopeResolutionOperator()
{
	int myvar = 20;
	cout << ::myvar << endl;	
}

int my_main()
{
	try {
		mightGoWrong();
	}
	catch (int e)
	{
		cout << "error code: " << e << endl;
	}
	catch (char const* e)
	{
		cout << "error message: " << e << endl;
	}
	catch (string &e)
	{
		cout << "string error message: " << e << endl;
	}
	cout << "still running" << endl;
    return 0;
}

