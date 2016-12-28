#include <iostream>

using namespace std;

int squareByValue(int a) {
    return (a * a);
}

void squareByReference(int &a) {
    a *= a;
}

void squareByPointer(int *aPtr) {
    *aPtr *= *aPtr;
}

int main() {
    int x = 2, y = 3, z = 4;
    squareByPointer(&x);
    cout << x << endl;
    squareByReference(y);
    cout << y << endl;
    z = squareByValue(z);
    cout << z << endl;
    return 0;
}