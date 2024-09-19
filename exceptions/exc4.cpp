//throwing int exception
#include<iostream>
using namespace std;
main()
{
	try
	{
		throw 100; // throwing value 100

	}
	catch(int a) { // collected int exception
		cout << "exception: " << a << endl;
	}
}

