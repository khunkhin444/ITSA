#include <iostream>
using namespace std;
int main() {
    int a,b,c,d;
    while(cin >> a >> b >> c >> d){ // a: start hour, b: start minute, c: end hour, d: end minute
        int start = a*60+b; // start time in minutes
        int end = c*60+d; // end time in minutes
        int cost = 0; 
        if(end-start<=120 && end-start>=30) cost = ((end-start)/30)*30;
        else if(end-start>120 && end-start<=240) cost = 120 + ((end-start-120)/30)*40; // if the parking time is less than 4 hours, the cost is 40 per 30 minutes
        else cost = 280 + ((end-start-240)/30)*60; // if the parking time is more than 4 hours, the cost is 60 per 30 minutes
        cout << cost << endl;
    }   
    return 0;
}