#include <iostream>
using namespace std;
main()
{
    int x =7;
    int &ref_x = x;

    ref_x ++; //both x and ref_x will change

    cout << x <<endl;
    cout << ref_x <<endl;
}