#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int run() {
	//vector is a template class
	vector<string> strings;
	strings.push_back("one");
	strings.push_back("two");
	strings.push_back("three");
	
	for (int i = 0; i < strings.size(); i++)
	{
		cout << strings[i] << endl;
	}

	//strings.begin(); //gives iterator which points to the first element
	//vector<string>::iterator iter = strings.begin(); //overloads the * operator
	//iter++;
	//cout << *iter << endl;

	for (vector<string>::iterator iter = strings.begin(); iter != strings.end(); iter++)
	{
		cout << *iter << endl;
	}

	vector<string>::iterator it = strings.begin();
	it += 2;
	cout << *it << endl;
	
	//cout << strings[1] << endl;
	//cout << strings.size() << endl;
	return 0;
}