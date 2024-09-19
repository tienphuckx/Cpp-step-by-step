//analysis of exception handling
#include<iostream>
using namespace std;
main()
{
	int num1,num2,ret;
	cout << "enter num1 and num2 " << endl;
	cin >> num1 >> num2;
	ret=num1/num2;
	cout << "Result - " << ret << endl;
	cout << "Hello world " << endl;
	cout << "good evenging" << endl;
}
// here if num2 value is 0 then will get float point exception and the further code will not be eexecuted successfully
// to avoid this problem we can go for exception hanfdling in c++
