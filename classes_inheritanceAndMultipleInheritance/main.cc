#include <iostream>
using namespace std;

class fridge
{
public:
	int temp;
protected:			//protected, but can be inherited by freezertruck
	bool HasFreeon;
};


class truck
{
int gas;
public:
	int speed;
	void setGas( int mGas)
	{
		gas = mGas;		//Now we can manipulate the private variable from freezertruck
	}
	int getGas()
	{
		return gas;
	}
};

class freezertruck: public truck, public fridge	//Remember: only the public variables can be seen from each class, the gas can not be seen.
{
public:
	void setFreeon()
	{
		this->HasFreeon = true;
	}
	
};

int main ()
{
	freezertruck mTruck;
	mTruck.speed = 100;
	mTruck.temp = 22;
	cout << mTruck.speed << endl;	
	cout << mTruck.temp << endl;	

	mTruck.setGas(100);
	cout << mTruck.getGas() << endl;	

	mTruck.setFreeon();
}
