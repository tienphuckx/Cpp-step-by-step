#include<iostream>
using namespace std;
main()
{
	try
	{
		throw  "abc"; // thowing  an exception of type string const
	}
	catch(int a) {
		cout << "int catch" <<endl;
	}
	catch(char *s) {  // sting const must be collected by const char *
		cout << "string  catch " << endl;
	}
}

//if we used only char * then type is not matching properly so it will be unhandled exception.
//internally terminate function will get called

