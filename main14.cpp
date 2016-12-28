#include <iostream>

using namespace std;

class ComplexT{
public:
    ComplexT(float n, float p){
        re = n;
        im = p;
    }
    bool operator>(const ComplexT& z) const{

        float f1 = re * re + im * im;
        float f2 = z.re * z.re + z.im * z.im;
        return f1 > f2;
    }

    friend ostream &operator<<( ostream &output, const ComplexT &D){

        output << D.re << "," << D.im << endl;

        return output;
    }

    float im;
    float re;
};



template <class T>

const T & MAX(const T &v1, const T &v2) {
    if (v1 > v2)
        return v1;

    else
        return v2;
}

int main() {

    int i1=5, i2= -3;
    char c1='D', c2='N';
    float f1=3.05, f2=12.47;

    ComplexT z2(4.6, (float)-3.8);
    ComplexT z1(1.4, 0.6);

    cout << MAX(i1,i2) << endl;
    cout << MAX(c1,c2) << endl;
    cout << MAX(f1,f2) << endl;
    cout << MAX(z1,z2) << endl;

    return 0;
}