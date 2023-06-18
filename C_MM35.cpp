/*
Program that can read a 4-digit integer from the keyboard, representing the Western year, 
and then determine whether this year is a leap year (a leap every four years, no leap every hundred years, 
one leap every four hundred years, for example, 1900 AD is a multiple of 4, but it is divisible by 100, so it is not a leap year,
in the same way, 2000 is a leap year, because it can be integer by 400, and 2004 is of course also a leap year, because it can be divisible by 4)
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
        cout << "Bissextile Year" << endl;
    else
        cout << "Common Year" << endl;
    return 0;
}