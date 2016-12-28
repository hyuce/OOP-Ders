#include <iostream>

using namespace std;

class rasyonelSayi {
    int pay, payda;
public:
    rasyonelSayi();
    void IrasyonelSayi(int, int);
    void print();
};

void rasyonelSayi::IrasyonelSayi(int py, int pyd) {
    pay = py;
    if (pyd == 0) payda = 1;
    else payda = pyd;
}

/*
rasyonelSayi::rasyonelSayi(int py, int pyd) {
    pay = py;
    if (pyd == 0) payda = 1;
    else payda = pyd;
}
*/

void rasyonelSayi::print() {
    cout << pay << "/" << payda << endl;
}

rasyonelSayi::rasyonelSayi() {

}


class karmasikRasyonel { // rasyonel sayilar
rasyonelSayi reel, sanal;
        //reel = rasyonelSayi(0, 0), sanal = rasyonelSayi(0,0) ;// nesne uyeler
public:
    karmasikRasyonel(int, int); // kurucu fonksiyon void print();
void print();
};

karmasikRasyonel::karmasikRasyonel(int r, int i) : reel(r, r), sanal(i, i)
{
//cout << "abc";
}

void karmasikRasyonel::print() {
    reel.print();
    sanal.print(); }

int main() {
    rasyonelSayi t;
    t.IrasyonelSayi(10,20);
    t.print();
//    karmasikRasyonel karmasik(2,5);
//    karmasik.print();
    return 0;
}