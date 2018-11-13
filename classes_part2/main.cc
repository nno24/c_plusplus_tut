#include <iostream>
#include "cat.h"
using namespace std;

int main ()
{
//WAY 1 without pointers
 cat mCat;
 mCat.setAge(10);

	cout << mCat.getAge() << endl ;
cat xCat(12);
	cout << xCat.getAge() << endl ;

//Way 2 with pointers
//
 cat *eCat = new cat;
 eCat->setAge(28);
	cout << eCat->getAge() << endl;
 

 delete eCat;
//Now we initialize when creating the pointer
 cat *zCat = new cat(15);
	cout << zCat->getAge() << endl;
 

 delete zCat;
}
