#include <string>
#include <set>
#include <iostream>
#include<cstdlib>

using namespace std;

int main() {
    set<string> city;
    set<string>::iterator iter;
    city.insert("Trabzon");
    city.insert("Adana");
    city.insert("Edirne");
    city.insert("Bursa");
    city.insert("Istanbul");
    city.insert("Rize");
    city.insert("Antalya");
    city.insert("Izmir");
    city.insert("Hatay");
    city.insert("Ankara");
    city.insert("Zonguldak");
    iter = city.begin(); // display set
     while( iter != city.end() )
         cout << *iter++ << endl;

    string lower, upper; // display entries in range
    cout << "\nEnter range (example A Azz): ";
    cin >> lower >> upper;
    iter = city.lower_bound(lower);

    while( iter != city.upper_bound(upper) )
        cout << *iter++ << endl;
}