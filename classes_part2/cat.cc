#include "cat.h"
#include <iostream>
using namespace std;
//Here is the implementation

cat::cat(void) //constructor, called automatically when the class i created
{
	cout << "creating cat" << endl;
}

cat::cat(int mAge)
{
	cout << "creating cat with age" << endl;
	setAge(mAge);
	
}

cat::~cat(void) //The destructor is called when the class i destroyed
{
	
}

int cat::getAge()
{
	return Age;
}

void cat::setAge(int mAge)
{
	Age=mAge;
}

