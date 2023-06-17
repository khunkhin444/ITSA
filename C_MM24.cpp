#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int hours, wage;
    cin >> hours >> wage;
    if(hours <= 60){
        cout << fixed << setprecision(1) << hours * wage << endl;
    }else if(hours <= 120){
        cout << fixed << setprecision(1) << 60 * wage + (hours - 60) * wage * 1.33 << endl;
    }else{
        cout << fixed << setprecision(1) <<  60 * wage + 60 * wage * 1.33 + (hours - 120) * wage * 1.66 << endl;
    }
    return 0;
}