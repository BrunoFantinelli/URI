#include <iostream>
#include <iomanip>
using namespace std;

int main (){
    float a,b,c,peri,area;
    cout << fixed << setprecision(1);
    cin >> a;
    cin >> b;
    cin >> c;
    peri = (a+b+c);
    area = (c*(b+a)/2);
    if((a<b+c)&&(b<c+a)&&(c<b+a)){
        cout << "Perimetro = " << peri << endl;
    }
    else
        cout << "Area = " << area << endl;
    return 0;
}