#include<iostream>
using namespace std;
int main()
{
    int x = 7; 

    /*
        create a const ref to x
    */
   const int& ref = x;

   /*
        if you change value of x --> works
        cus x is NOT a const
        just a normal value
   */
    x = 13;

    /*
        if you change value of ref --> error
        because ref is a const
    */
   ref = 15; //ERROR


}