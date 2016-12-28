#include<iostream>
#include <string>

using namespace std;

class A {
private:
int x;
float y;
public:

A(int i, float f) : x(i), y(f)
// initialize A
{ cout << "Constructor A" << endl; }

void display() {
    cout << x << ", " << y << "; " ;
}

};

class B : public A {
private:
    int v;
    float w;
public:
    B(int i1, float f1, int i2, float f2)
            : A(i1, f1), // initialize A
              v(i2), w(f2) // initialize B
    { cout << "Constructor B" << endl; };

    void display() {
        A::display();
        cout << v << ", " << w << "; " ;
    }
};

class C : public B {
private:
    int y;
    float z;
public:
    C(int i1, float f1, int i2, float f2, int i3, float f3)
            : B(i1, f1, i2, f2), // initialize B
              y(i3), z(f3) // initialize C
    { cout << "Constructor C" << endl; };

    void display() {
        B::display();
        cout << y << ", " << z << endl;
    }
};

int main() {

    C c(1, 1.1, 2, 2.2, 3, 3.3);
    cout << "\nData in c = ";
    c.display();

}