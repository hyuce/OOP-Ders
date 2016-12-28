#include <iostream>
#include <list>

using namespace std;

int main()
{
    int arr1[] = { 40, 30, 20, 10 };
    int arr2[] = { 15, 20, 25, 30, 35 };

    list<int> list1(arr1, arr1+4);
    list<int> list2(arr2, arr2+5);

    list1.reverse();                     // reverse list1: 10 20 30 40
    list1.merge(list2);                  // merge list2 into list1
    list1.unique();                      // remove duplicate 20 and 30
    int size = list1.size();
    for(int j=0; j<size; j++)            // for every item
    {
        cout << list1.front() << ' ';     // read item from front
        list1.pop_front();                // pop item off front
    }
    return 0;
}
