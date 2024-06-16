//convert seconds to hours, minutes and seconds
#include <iostream>
using namespace std;
int main(){
    int seconds, hours, minutes, seconds_remaining;
    cout<<"Enter the number of seconds: ";
    cin>>seconds;
    hours = seconds/3600;
    minutes = (seconds%3600)/60;
    seconds_remaining = (seconds%3600)%60;
    cout<<"Hours: "<<hours<<endl;
    cout<<"Minutes: "<<minutes<<endl;
    cout<<"Seconds: "<<seconds_remaining<<endl;
    return 0;
}