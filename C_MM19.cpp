#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int n;
    while(cin >> n){
        if(n <= 800) cout << setprecision(1) << fixed << (double)n*0.9 << endl;
        else if(n >800 && n<1500) cout << setprecision(1) << fixed << (double)n*0.9*0.9 << endl;
        else cout << setprecision(1) << fixed << (double)n*0.9*0.79 << endl;
    }
    return 0;
}