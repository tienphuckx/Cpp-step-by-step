// one try with multiple catch
#include<iostream>
using namespace std;
main()
{
	try
	{
    	throw 100; // throwing int type
//		throw "good";
		throw 'a';		
	
	}
	catch(int a) { // collected by int 
		cout << "int catch block" << endl;
	}
	catch(const char *s) {
		cout << "char * catch block " << endl;
	}
	catch(float f){
		cout << "float catch block "<< endl;
	}
	catch(double d) {
		cout << "double catch block "<< endl;
	}
	catch (char ch) {
		cout << "catch char block "<< endl;
	}
}
// whenever the exception is thrown it will check  exact catch block for providing solution




