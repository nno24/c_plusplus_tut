#include <iostream>
using namespace std;

int main ()
{
	//Normal array
	int line [5] = {1,2,3,4,5};
	
	cout << "person 2 has" << line [1] << endl;

	line [0] = 100;
	cout << "person 2 has" << line [0] << endl;


	//Multidim array, an array of an array
	int line2 [5][2]; //Five people, and each person has 2 different identifications
	line2 [0][0] = 97;
	line2 [0][1] = 98;

	line2 [1][0] = 99;
	line2 [1][1] = 100;

	cout << line2 [1][1] << endl ;
	
	//Change the size of the multidimensional array on the fly
	 line2 [1][4] = 69;
	
	cout << line2 [1][4] << endl ;

	int line3 [2][2] = {1,2,3,4};
	
	 
	cout << line3 [0][0] << endl ;
	cout << line3 [0][1] << endl ;
	cout << line3 [1][0] << endl ;
	cout << line3 [1][1] << endl ;
}
