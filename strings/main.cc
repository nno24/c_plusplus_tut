#include <iostream>
#include <string>
using namespace std;

int main ()
{
	//C style string
	//Ends in 0 so that the compiler knows its the end of the string :)
	//char Name [80] = {'\0'};	
	char Name [80] = "nicolai";	
	cout << "enter your name" << endl;
	cin >> Name;
	cout << "hello" << Name << endl;

	//C++ style string
	string myName = "Nicolai";
	cout << "enter your name" << endl;
	cin >> myName;
	cout << "hello " << myName << endl ;
	
}
