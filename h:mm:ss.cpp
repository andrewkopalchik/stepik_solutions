#include <iostream>
using namespace std;
int main(){
    int n, hours, minutes, seconds=0;
    hours = 0;
    minutes = 0;
    cin >> n;
    if (n>10000000){
        return 0;
    }
    while (n>=3600){
        hours = hours+1;
        n=n-3600;
    }

    while (n>=60){
        minutes=minutes+1;
        n=n-60;
    }

    seconds = seconds +n;
    while (hours>24){
        hours=hours-24;
    }


   
    
    
    if (minutes<10 && seconds<10)
    {
        cout << hours << ':' << '0' << minutes << ':' << '0' << seconds;
        return 0;
    }
    if (seconds<10){
        cout << hours << ':' << '0' << minutes << ':' << '0' << seconds;
        return 0;
    }
    if (minutes<10){
        cout << hours << ':' << '0' <<  minutes << ':' << seconds;
        return 0;
    }
    else
    {
        cout << hours << ':' << minutes << ':' << seconds << endl;
        return 0;
    }
    
}