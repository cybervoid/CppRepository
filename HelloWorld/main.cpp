#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name;
	int year;
	cout << "Enter your name: ";
	//cin >> name;
	getline(cin, name);
	cout << "Enter the year you were born: ";
	cin >> year;
	cout << name << ", you will be " << 2017 - year << "years old this year." << endl;

    return 0;
}
