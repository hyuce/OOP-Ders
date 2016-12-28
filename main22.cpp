#include <string>
#include <map>
#include <iostream>
#include<cstdlib>

using namespace std;

int main() {
    map<string, int> city_num;
    city_num["Trabzon"] = 61;
    city_num["Adana"] = 01;
    city_num["Edirne"] = 22;
    city_num["Bursa"] = 16;
    city_num["Istanbul"] = 34;
    city_num["Rize"] = 53;
    city_num["Antalya"] = 07;
    city_num["Izmir"] = 35;
    city_num["Ankara"] = 06;
    city_num["Zonguldak"] = 67;

    string city_name;
    cout << "\nŞEHİR ADI GİRİNİZ: ";
    cin >> city_name;

    if (city_num.end() == city_num.find(city_name))
        cout << city_name << " VERİTABINDA YOK" << endl;
    else
        cout << "ŞEHİR ADI " << city_name << ": " << city_num[city_name];
}
