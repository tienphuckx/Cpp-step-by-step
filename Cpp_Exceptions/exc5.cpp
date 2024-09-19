// how to return a value from constructor
#include<iostream>
using namespace std;
class A
{

	public:
		A() {
			cout << "constructor" << endl;
			throw 100; //constructor throwing value 100
		}
};
main()
{
	int x;
	try
	{ 
		A obj1;
	}
	catch(int a) {
		x=a;
	}
	cout << "x value - " << x << endl;
}
