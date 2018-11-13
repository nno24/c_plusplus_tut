#include <iostream>
using namespace std;

void test ( int *mNumb )		//function prototype
{
		cout << mNumb << endl;    //this is the memory location
		cout << *mNumb << endl;
}
int main ()
{
	//manual memeory management
	int *mNumb = new int;
	*mNumb = 2;
		cout << mNumb << endl;    //this is the memory location
		cout << *mNumb << endl;  //the value

		test(mNumb);		//Giving it the memory address
		delete mNumb;		//If not, whis will and can create a memory leak
					//Every time we run the program, we create a new random variable from the mNumb.
					//If we had a loop, which will create a munch of pointers and the will eventually fill up the memory until the program crashes.
					//
					//C++ is all about memory management, its incredibly, incredibly fast

	
}
