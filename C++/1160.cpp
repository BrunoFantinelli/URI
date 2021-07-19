#include <iostream>
using namespace std;


int main(){
    int test, c, m;
    int a, b;
    double ac, bc;
    cin >> test;
    for(m=1; m<=test; m++){
        c = 0;
        cin >> a >> b >> ac >> bc;
        while(a <= b){
            a *= (ac / 100.0) + 1.0;
            b *= (bc / 100.0) + 1.0;
            c++;
            if (c > 100){
                cout << "Mais de 1 seculo." << endl;
                break;
            }
        }
        if (c <= 100){
            cout << c << " anos." << endl;
        }
    }
    return 0;
}
