#include <iostream>
using namespace std;


//Object is an instance of a calss, class is a templaate.
//The template acts differently, on how we ant it: this is called polymorphic programming. The power of object oriented programming.
class cat
{
private:		//By default everthing in the class cat is private ( if not specifying anything else )
	int Age;
public:			//The public area, can be accessed from main()

	int getAge()	//This is a "Getter"
	{
		return Age;
	}

	void setAge(int theAge ) //This is a "setter"
	{
		Age=theAge;
	}

};

int main ()
{
	cat mGirl;
	cat mBoy;
	mBoy.setAge(17);
	mGirl.setAge(18);
	cout << "the age is" << mBoy.getAge() << endl;	
	cout << "the age is" << mGirl.getAge() << endl;	
}
