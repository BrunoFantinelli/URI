#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
    double r,pi,volum;
    cout << fixed << setprecision(3);
    cin >> r;
    pi = 3.14159;
    volum = ((4/3.0) * pi *(r*r*r));
    cout << "VOLUME = " << volum << endl;
    return 0;
}