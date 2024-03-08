#include<iostream>
using namespace std;

int main() {
    int hour, min, time;
    cin >> hour >> min;
    if (hour == 0)
        hour = 24;

    time = hour * 60 + min;

    int time_re = time - 45;
    int hour_re, min_re;
    hour_re = time_re / 60;
    min_re = time_re % 60;

    if (hour_re == 24)
        hour_re = 0;
    cout << hour_re << " " << min_re << endl;

}