#include <iostream>
#include <iomanip>

using namespace std;

int main (){
    float p,n,v,pp,nn,vv,total;
    cout << fixed << setprecision(2);
    cin >> p;
    cin >> n;
    cin >> v;
    cin >> pp;
    cin >> nn;
    cin >> vv;
    total = ((n*v)+(nn*vv));
    cout << "VALOR A PAGAR: R$ " << total << endl;
    return 0;
}