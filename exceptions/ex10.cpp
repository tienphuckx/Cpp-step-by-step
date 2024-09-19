#include<iostream>
using namespace std;
main()
{
	try
	{
		throw 10;  // because of this control jumped to catch block int
		throw  "abc"; // it will never be executed
	}
	catch(int a) {
		cout << "int catch" <<endl;
	}
	catch(const char *s) {
		cout << "string  catch " << endl;
	}
}


