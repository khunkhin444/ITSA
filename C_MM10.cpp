#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    double c;
    while(cin >> c){
        cout << fixed << setprecision(1) << c*9/5+32 << endl;
    }
    return 0;   
}