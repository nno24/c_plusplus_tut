#include <iostream>
using namespace std;

int main ()
{
	int i = 0;

	while (i < 4 )
	{
		cout << i << endl;
		i++;
	}


//Do is executed before processing statement, chich is the opposite for while loop ( will also print the value 4	
	do
	{
		cout << i << endl;
		i++;
		
	} while (i < 4);
	
}
