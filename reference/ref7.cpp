#include<iostream>
using namespace std;
int main() 
{
    /*
        13 is already a const, not a variable
        then
        you can't provide normal alias for a const
    */
    int &ref = 13; //error


    /*
        use a const alias instead
    */
    const int &ref = 13; //ok works

}