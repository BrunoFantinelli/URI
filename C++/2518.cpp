#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
    int numero_degrau, h,c,l;
    double res;
    cout << fixed << setprecision(4);
    while(cin >> numero_degrau){
        cin >> h >> c >> l;
        res = sqrt((h*h) + (c*c));
        res = res * l;
        res = res * numero_degrau;
        res = res / 10000;
        cout << res << endl;
    }
    return 0;
}
