#include <iostream>
 
using namespace std;
 
int main() {
    int tent, cont, ch = 0;
    float valor;
    cin >> tent;
    while(ch < tent){
        cin >> valor;
        cont = 0;
        while(valor > 1){
            valor = valor/2;
            cont++;
        }
        cout << cont << " dias" << endl;
        ch++;
    }
    return 0;
}