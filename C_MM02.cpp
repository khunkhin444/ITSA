#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int base, height;
    double area;
    cin >> base >> height;
    area = base * height / 2.0;
    cout << setprecision(1)<< fixed << area << endl;
    return 0;
}