#include <iostream>

using namespace std;

class Time {
public:
    Time();
    void SetTime(int, int, int);
    void PrintTime();

private:
    int hour;
    int minute;
    int second;
};

Time::Time() {
    hour = minute = second = 0;
}

void Time::SetTime(int h, int m, int s) {
    if (h >= 0 && h < 24) {
        hour = h;
    } else {
        hour = 0;
    }
    if (m >= 0 && m < 60) {
        minute = m;
    } else {
        minute = 0;
    }
    if (s >= 0 && s < 60) {
        second = s;
    } else {
        second = 0;
    }
}

void Time::PrintTime() {
    if ((hour == 0) || (hour == 12)) {
        cout << 12;
    } else {
        cout << hour % 12;
    }
    if (cout << ":" << (10 > minute)) {
        "0";
    } else {
        "";
    };
    if (cout << minute << ":" << (second < 10)) {
        "0";
    } else {
        "";
    };
    if (hour < 12) {
        cout << second << " AM";
    } else {
        cout << second << " PM";
    }
}

int main() {
    Time t;
    t.PrintTime();
    t.SetTime(13, 27, 16);
    t.PrintTime();
    t.SetTime(99, 99, 99);
    t.PrintTime();
    cout << endl;
    return 0;
}