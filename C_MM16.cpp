/*
There is a circle with a diameter of 200 and a central coordinate of (0,0). 
Please write a program that can enter the coordinates of the "point" and determine whether the "point" is within the range of a circle. 
If the position of the " point " is exactly on the boundary , it is also considered to be in the circle range (e.g. x=100, y=0).
*/
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int x, y;
    while(cin >> x >> y){
        if(sqrt(x*x+y*y)<=100){
            cout << "inside" << endl;
        }else{
            cout << "outside" << endl;
        }
    }
    return 0;
}