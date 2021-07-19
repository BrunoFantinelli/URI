#include <iostream>
using namespace std;

int main(){
    int dias, saldo;
    int mov, menor;
    cin >> dias >> saldo;
    menor = saldo;
    for(int i = 0; i < dias; i++){
        cin >> mov;
        saldo = saldo + mov;
        if (saldo < menor){
            menor = saldo;
        }
    }
    cout << menor << endl;
}
