#include <iostream>
using namespace std;
main()
{
    char c;
    cout<< "Input a char: "<<endl;
    cin>>c;
    cout<<"Your input: "<<c<<endl;
    cout<<"ASCII of your char: "<<(int)c<<endl; //using typecast to get ASCII of a char
}