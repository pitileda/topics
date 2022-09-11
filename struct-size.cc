#include <iostream>

using namespace std;

//Empty class
class EmptyClass{

};

struct Ihor {
	bool i;
	bool y;
};

//Empty class that contains only function
class EmptyClassWithFunctions{
public: 
	virtual void display(){
	}
};

int main(int argc, char const *argv[])
{
	cout << sizeof(EmptyClassWithFunctions) << endl;
	cout << sizeof(EmptyClass) << endl;
	cout << sizeof(Ihor) << endl;
	return 0;
}