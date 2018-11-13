#include <iostream>
#include "test.h"
#include "widget.h"
using namespace std;

int getAge (); //function prototype, fuction in test.h 
void hello ();
int main ()
{
	int Age;
	Age = getAge();
	cout << Age << endl;
	cout << hello << endl;
	hello();
	sayHelloWorld();
	
}
