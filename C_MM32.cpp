#include <iostream>
using namespace std;
int main()
{
    int n, a, b, c;
    cin >> n;
    a = n / 100;
    b = (n - a * 100) / 10;
    c = n % 10;
    if (n == a * a * a + b * b * b + c * c * c)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}