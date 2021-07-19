#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float ci,ni,op;
    float soma_cima = 0, soma_baixo = 0;
    cout << fixed << setprecision(4);
    while(cin >> op){
        for(int i = 0; i < op; i++){
            cin >> ni >> ci;
            soma_cima += ni * ci;
            soma_baixo += ci*100;
        }
        cout << soma_cima/soma_baixo << endl;
        soma_cima = soma_baixo = 0;
    }
    return 0;
}
