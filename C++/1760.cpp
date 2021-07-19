#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
    double a,r,area;
    cout << fixed << setprecision(2);
    while(cin >> a){
        r = sqrt(3)/4;
        area = r * a * a;
        cout << area*1.6 << endl;
    }
    return 0;
}
