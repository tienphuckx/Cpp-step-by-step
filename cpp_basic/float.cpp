#include <iostream>
using namespace std;
main()
{

    float f;
    cout << "Enter a float number: ";
    cin >> f;
    cout << f << endl; //%g format
    cout << fixed << f << endl; //%f format
    cout << scientific << f << endl; //%e format
    // in c,float values can print in 3 ways : %g %f %e
}