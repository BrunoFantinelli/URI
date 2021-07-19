#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
    double x,y,n,resp;
    cin >> n;
    cout << fixed << setprecision(1);
    x = (1 + sqrt(5))/2.0;
    y = (1 - sqrt(5))/2.0;
    resp = (pow(x,n) - pow(y,n))/sqrt(5);
    cout << resp << endl;

    return 0;
}
