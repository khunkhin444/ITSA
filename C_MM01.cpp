#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int top, bottom, height;
    double area;
    cin >> top >> bottom >> height;
    area = ((top + bottom) * height) / 2.0;
    cout << setprecision(1)<< fixed << "Trapezoid area:" << area << endl;
    return 0;
}