#include<iostream>
#include <string>

using namespace std;

class Calisan {
public:
    Calisan(string Ad, float OdemeYuzdesi);

    string AdVer() const;
    float OdemeOraniVer() const;
    float Odeme(float calisilanSaat) const;

protected:
    string isim;
    float odemeOrani;
};

Calisan::Calisan(string AdVer, float OdemeYuzdesi)
{
    isim = AdVer;
    odemeOrani = OdemeYuzdesi;
}

string Calisan::AdVer() const
{
    return isim;
}

float Calisan::OdemeOraniVer() const
{
    return odemeOrani ;
}

float Calisan::Odeme(float CalisilanSaat) const
{
    return CalisilanSaat * odemeOrani;
}

class Yonetici : public Calisan {
public:
    Yonetici(string Ad, float OdemeYuzdesi, bool AylikliMi);
    bool Ayliklidir() const;
    float Odeme(float CalisilanSaat) const;

protected:
    bool aylikli;
};

Yonetici::Yonetici(string Ad, float OdemeYuzdesi, bool Ayliklimi)
        : Calisan(Ad, OdemeYuzdesi)
{
    aylikli = Ayliklimi;
}

bool Yonetici::Ayliklidir() const
{
    return aylikli;
}

float Yonetici::Odeme(float CalisilanSaat) const
{
    if (aylikli)
        return odemeOrani;
    /* else */
    return Calisan::Odeme(odemeOrani);
}


int main() {

    Calisan Kisi("Ahmet Mehmet", 25.0);

    cout << "Calisan Kisi:" << Kisi.AdVer() << endl;
    cout << "Oran:" << Kisi.OdemeOraniVer() << endl;
    cout << "Yevmiye:" << Kisi.Odeme(20) << endl;

    Yonetici Hanim1("Ayse Fatma", 12000.0, true);
    cout << "Calisan Kisi: " << Hanim1.AdVer() << endl;
    cout << "Oran :" << Hanim1.OdemeOraniVer() << endl;
    cout << "Ucret :" << Hanim1.Odeme(20) << endl;

    Yonetici Hanim2("Fatma Ayse", 12.0, false);
    cout << "Calisan Kisi: " << Hanim2.AdVer() << endl;
    cout << "Oran :" << Hanim2.OdemeOraniVer() << endl;
    cout << "Ucret :" << Hanim2.Odeme(10) << endl;


}