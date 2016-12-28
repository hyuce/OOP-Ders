#include<iostream>
using namespace std;

class nokta
{
public:
    nokta()
    {
    }
   nokta(int px,int py)
    {
        x=px; y=py; //private değişkenlere tama yaptık constructorda
    }
    nokta operator+(nokta p)//en basit hali ile + operatorunu aşırı yükledik
    {
        nokta donecek;
        donecek.x=x+p.x;
        donecek.y=y+p.y;
        return donecek;
    }
private:
    int x,y;
};

int main()
{
    nokta n1(10,10);
    nokta n2(20,20);
    nokta toplam;
    toplam=n1+n2;//işte burada bizim nokta sınıfı için yazdığımız operator fonksiyonu devreye girer.
}