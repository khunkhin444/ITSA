#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = n-1; i >= 2; i--) {
        bool isPrime = true;
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            cout << i << endl;
            break;
        }
    }
    return 0;
}