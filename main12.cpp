#include <iostream>

using namespace std;

template <class T>
T abs(T n) {
return (n < 0) ? -n : n;
}

int main() {
    int int1 = 5;
    int int2 = -6;
    long lon1 = 70000L;
    long lon2 = -80000L;
    double dub1 = 9.95;
    double dub2 = -10.15;

    cout << "abs(" << int1 << ")=" << abs(int1) << endl;
    cout << "abs(" << int2 << ")=" << abs(int2) << endl;
    cout << "abs(" << lon1 << ")=" << abs(lon1) << endl;
    cout << "abs(" << lon2 << ")=" << abs(lon2) << endl;
    cout << "abs(" << dub1 << ")=" << abs(dub1) << endl;
    cout << "abs(" << dub2 << ")=" << abs(dub2) << endl;
}