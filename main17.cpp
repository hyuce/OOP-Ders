#include <string>
#include <queue>
#include <iostream>
#include<cstdlib>

using namespace std;

int main()
{
    queue<string> pq;

    pq.push("the quick");
    pq.push("fox");
    pq.push("jumped over");
    pq.push("the lazy dog");



    while (!pq.empty()) {
        cout << pq.front() << endl;  // Print highest priority string
        pq.pop();                    // Remmove highest priority string
    }

    return 0;
}