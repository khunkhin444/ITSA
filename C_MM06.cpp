#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    int a;
    while(cin >> a){
        cout << setprecision(1)<< fixed << round(a*1.6*10)/10 << endl;
    }
    return 0;
}