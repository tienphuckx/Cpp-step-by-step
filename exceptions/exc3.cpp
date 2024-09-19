//analysis of exception handling
#include<iostream>
using namespace std;
int division(int n1,int n2) {
  if(n2==0)
     throw "dividing by zero";
  else
     return n1/n2;
}
main()
{
	int num1,num2,ret;
	cout << "enter num1 and num2 " << endl;
	cin >> num1 >> num2;
	try // it is a block ,monitoring the code
	{
		ret=division(num1,num2);
		cout << "Result - " << ret << endl; //result printing
	}
	catch(const char *s) { //collecting the exception
		cout << "exception: " << s << endl; 
	}
	cout << "Hello world " << endl;
	cout << "good evenging" << endl;
}
 // irrespective of throw keyword ,the catch block must be immediate statement of try block

