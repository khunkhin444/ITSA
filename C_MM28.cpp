/*
writing a program that lets the user enter any positive integer N and calculate a value between 1 and N that is a multiple of 5 and 7.
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {   
        if (i % 5 == 0 && i % 7 == 0) {
            if (i==35) cout << 35;
                else cout << " " << i;
        }
    }
    cout << endl;
    return 0;
}