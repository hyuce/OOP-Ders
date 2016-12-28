#include <string>
#include <set>
#include <iostream>
#include<cstdlib>

using namespace std;

int main() {
    string names[] = {"Katie", "Robert", "Mary", "Amanda", "Marie"};
    set<string> nameSet(names, names + 5);
    set<string>::const_iterator iter;
    nameSet.insert("Jack");
    nameSet.insert("Larry");
    nameSet.insert("Robert");
    nameSet.insert("Barry");
    nameSet.erase("Mary");
    cout << "\nSize=" << nameSet.size() << endl;
    iter = nameSet.begin(); // display members of set
    while( iter != nameSet.end() )
    cout << *iter++ << '\n';
    string searchName; // get name from user
    cout << "\nEnter name to search for: ";
    cin >> searchName; // find matching name in set
    iter = nameSet.find(searchName);
    if (iter == nameSet.end())
        cout << "The name" << searchName << " is NOT in the set.";
    else
        cout << "The name " << *iter << " IS in the set.";
}