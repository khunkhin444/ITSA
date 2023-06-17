#include <iostream>
using namespace std;
int main() {
    int a, b;
    while(cin >> a >> b){
        int c = a, d = b;
        while(c != d){
            if(c > d) c -= d;
            else d -= c;
        }
        cout << c << endl;
    }
    return 0;
}