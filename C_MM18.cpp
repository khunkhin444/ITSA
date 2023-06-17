#include <iostream>
using namespace std;
int main()  {
    int n;
    while(cin >> n){
        for(int i=7; i>=0; i--){
            cout << ((n>>i)&1);
        }
        cout << endl;
    }
    return 0;
}