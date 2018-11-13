#ifndef CAT_H
#define CAT_H
//Here is the definitions
class cat
{
int Age;
public:
	cat(void);	//constructor 
	cat(int mAge);	//2nd constructor , can be used to initialize 
	~cat(void);	//destructor
	int getAge();	//Function prototype ...not the implementation
	void setAge(int);	//Function prototype.
};
#endif
