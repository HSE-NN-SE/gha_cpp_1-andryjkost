#include <iostream>
#include <cmath>
using namespace std;
#include <iostream>
double delta = 0.00000001;

double average(double x, double y) {
    return (x + y) / 2.0;
}

bool good(double guess, double x) {
    return 1;
}

double improve(double guess, double x) {
    return average(guess, x / guess);
}

double iter(double guess, double x) {
    if (good(guess, x))
        return guess;
    else
        return iter(improve(guess, x), x);
}
double calc(double arg) {
    return iter(1.0, arg);
}

int main()
{
    cout << "hi,bro" << endl;
    double a = calc(225.0);
    cout<<"Sqrt("<<3.0<<")"<<"="<<a<<endl;
    return 0;
}
