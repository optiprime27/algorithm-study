#include <iostream>
using namespace std;

int main(){
    int hour, min, time;

    cin >> hour >> min;
    cin >> time;

    if((min+time)>=60){
        hour = hour + (min+time)/60;
        min = (min+time)%60;
    }
    else{
        min = min + time;
    }
    if(hour>=24){
        hour = hour - 24;
    }

    cout << hour << " " << min;
}