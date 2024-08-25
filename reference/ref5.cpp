#include<iostream>
using namespace std;
int main()
{
    const int x = 7; // x is const
    int &ref_x = x; // ERROR: to avoid ref_x will change x value
  
    int const &ref = x; // CORRECT way to create a ref to a const value

    ref = 8; //ERROR cuz x is a const

}   
