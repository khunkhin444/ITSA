#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int a; // 
    while(cin >> a){
        cout << (int)ceil(((a*100)/(100-30*2.54))) << endl;
    }
    return 0;
}