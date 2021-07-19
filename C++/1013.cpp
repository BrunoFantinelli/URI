#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double A,B,C,atr,ac,atrap,aq,aretan,pi;
    pi = 3.14159;
    cout << fixed << setprecision(3);
    cin >> A;
    cin >> B;
    cin >> C;
    atr = ((A*C)/2);
    ac = ((C*C) * pi);
    atrap = ((C*(A+B))/2);
    aq = (B*B);
    aretan = (A*B);
    cout << "TRIANGULO: " << atr <<endl;
    cout << "CIRCULO: " << ac << endl;
    cout << "TRAPEZIO: " << atrap << endl;
    cout << "QUADRADO: " <<  aq << endl;
    cout << "RETANGULO: " << aretan << endl;
    return 0;
}