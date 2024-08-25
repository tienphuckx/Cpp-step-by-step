#include <iostream>
using namespace std;
int main()
{
    int x = 7;
    int &ref_x = x; //ref_x is duplicate name of x


    cout<< x<<endl; //print data of x
    cout<< ref_x<<endl; //print data of ref_x

    cout << &x <<endl; //print addredd of x
    cout << &ref_x <<endl; //print address of ref_x

    //x and ref_x they both point to the same address

    return 0;
}