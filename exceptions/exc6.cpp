//constructor failed to execute,so bject not created
#include<iostream>
using namespace std;
class A
{
	int x;
	public:
	A() {
		throw 10; // constructor terminated becuase of throw
		cout << "constructor" << endl;
		x=10;
	}
	~A() {
		cout << "Destructor "<< endl;
	}
	void get_data() {
		cout << "x - " << x << endl;
	}
};
main()
{
	try
	{ 
		A obj1;
		obj1.get_data();
	}
	catch(int a) {
		cout << "object not created" << endl;
	}
}
