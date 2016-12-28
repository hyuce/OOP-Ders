#include <iostream>

using namespace std;

double average(const double a[], int size);

double average(const int a[], int size);

double average(const int a[], const double b[], int size);

double average(const int a[], int size) {
    double sum = 0.0;
    for (int i = 0; i < size; i++)
        sum += a[i];
    return ( double ) sum / size;
}

double average(const double a[], int size) {
    double sum = 0.0;
    for (int i = 0; i < size; i++)
        sum += a[i];
    return (sum / size);
}

double average(const int a[], const double b[], int size) {
    double sum = 0.0;
    for (int i = 0; i < size; i++) sum += a[i] + b[i];
    return (sum / size);
}

int main() {
    int w[5]={1,2,3,4,5} ;
    double x[5]={1.1,2.2,3.3,4.4,5.5} ;
    cout << average(w,5) << endl;
    cout << average(x,5) << endl;
    cout << average(w,x,5) << endl;
    return 0 ;
}