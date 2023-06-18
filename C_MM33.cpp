/*
A number that is exactly equal to the sum of its factors is called a "perfect number"
For example, 6=1 + 2 + 3 , since 1 , 2 , and 3 are all factors of 6 , so 6 is a perfect number.
*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        int sum = 1;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
                sum += j;
        }
        if (sum == i) {
            if (i == 6) cout << i;
            else cout << " " << i;
        }
    }
    cout << endl;
    return 0;
} 