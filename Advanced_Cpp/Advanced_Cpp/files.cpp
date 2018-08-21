#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int writeFiles()
{
	ofstream outFile;
	string outputFileName = "text.txt";	
	outFile.open(outputFileName);
	if (outFile.is_open()) {
		outFile << "hello there" << endl;
		outFile << "more text written" << endl;
		outFile.close();
	}
	else {
		cout << "Could not create file: " << endl;
	}
	return 0;
} 