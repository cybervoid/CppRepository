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

int readFiles()
{
	string inFileName = "text.txt";
	ifstream inFile;
	inFile.open(inFileName, ios::in);

	if (inFile.is_open()) {
		string line;
		//while (!inFile.eof()) {
		while (inFile) {
			getline(inFile, line);
			cout << line << endl;
		}
		//inFile >> line;
		
		inFile.close();
	}
	else {
		cout << "Cannot open file: " << inFileName << endl;
	}
	return 0;
}