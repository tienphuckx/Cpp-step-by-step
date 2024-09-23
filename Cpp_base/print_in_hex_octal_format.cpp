/*
printing data in hex and octal format
*/
#include <iostream>
using namespace std;
int main()
{
    int x;
    cout<< "Input x: "<<endl;
    cin>>x;

    cout<<"x in Decimal = "<<x<<endl;
    cout<<"x in Hexadecimal = "<<hex<<x<<endl;
    cout<<"x in Octal = "<<oct<<x<<endl;
    return 0;
}