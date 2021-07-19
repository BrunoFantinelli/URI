#include <iostream>
using namespace std;

int main(){
    long long fatorial[20];
    fatorial[0] = fatorial[1] = 1;
        for (int i = 2; i < 20; ++i){
            fatorial[i] = fatorial[i-1] * i;
        }
    string entrada;
        while (cin >> entrada && entrada != "0"){
            cout << fatorial[entrada.size()] << endl;
        }
    return 0;
}
