/*
Input : Sec
Output : Days, Hours, Minutes, Sec
*/

#include <iostream>
using namespace std;
int main() {
    int sec;
    while(cin >> sec){
        int days = sec/(24*60*60);
        sec -= days*24*60*60;
        int hours = sec/(60*60);
        sec -= hours*60*60;
        int minutes = sec/60;
        sec -= minutes*60;
        cout << days << " days" << endl << hours << " hours" << endl << minutes << " minutes" << endl << sec << " seconds" << endl;
    }
    return 0;
}