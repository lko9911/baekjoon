#include<iostream>
using namespace std;

int main() {
    int hour, min, turn, time;
    cin >> hour >> min;
    cin >> turn;
   
    time = hour * 60 + min + turn;

    hour = time / 60;
    min = time % 60;

    while (1) {
        if (hour < 24)
            break;
        hour -= 24;
    }

    cout << hour << " " << min << endl;

}