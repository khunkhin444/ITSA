/*
There is a square with a length and width of 100 and a starting coordinate of (0,0).
Write a program that can enter the coordinates of the "point" and determine whether the "point" is within the range of the square. 
If the position of the "point" is exactly within the boundary, it is also considered to be within the square range (e.g. x=100, y=10).
*/

#include <iostream>
using namespace std;
int main() {
    int x, y;
    while(cin >> x >> y){
        if(x>=0 && x<=100 && y>=0 && y<=100){
            cout << "inside" << endl;
        }else{
            cout << "outside" << endl;
        }
    }
    return 0;
}