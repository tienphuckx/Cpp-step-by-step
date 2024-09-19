#include<iostream>
using namespace std;
main()
{
	try
	{
		throw 'a';		
	
	}
	catch(int a) { // collected by int 
		cout << "int catch block" << endl;
	}

}
// if the catch block is unable to handle the generated exception then internally will call one library function i.e terminate()
//terminate()  internally will call abort() then program will be terminated
// if unhandeled excepton generated then it will call terminate() function.
// runtime error will get



