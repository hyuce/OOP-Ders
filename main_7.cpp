#include <iostream>

using namespace std;

class A {
    char c;
    static int count; // Number of created objects (static data)
public:
    static int GetCount()
    {
        return count;
    } // Static function to initialize number

    A()
    {
        count ++;
        cout << endl << "Constructor" << count;
    }
    ~A()
    {
        count--;
        cout << endl << "Destructor" << count;
    } };

int A::count = 0; // Allocating memory for number

int main() {

    cout<<"\n Entering 1. BLOCK............";
    A a,b,c;
        {
            cout<<"\n Entering 2. BLOCK............";
            A d,e;
            cout<<"\n Exiting 2. BLOCK............";
        }
            cout<<"\n Exiting 1. BLOCK............";
            }