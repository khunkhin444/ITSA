/*
Program that enters a positive integer by the keyboard and then finds all its factors
for example 24 to print all factors 24, 1, 2, 3, 4, 6, 8, and 12 for 24.
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            if (i == 1) cout << i;
            else cout << " " << i;
        }
    }
    cout << endl;
    return 0;
}