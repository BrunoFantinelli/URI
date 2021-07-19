#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main(){
    double a,b,c,del,delta,x1,x2;
    cout << fixed << setprecision(0);
    cin >> a;
    cin >> b;
    cin >> c;
    del = ((b * b) - (4 * a * c));
    delta = sqrt(del);
    x1 = ((-b + (delta))/(2*a));
    x2 = ((-b - (delta))/(2*a));
    if(a*2!=0&&del>0){
        cout << fixed << setprecision(5);
        cout << "R1 = " << x1 << endl << "R2 = " << x2 << endl;
    }
    else
    cout << "Impossivel calcular" << endl;
 
    return 0;
}