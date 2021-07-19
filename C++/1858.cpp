#include <iostream>
using namespace std;

int main(){
    int testes,valores;
    int menor_pos, menor_valor;
    cin >> testes;
    for(int i = 0; i < testes; i++){
        cin >> valores;
        if(i == 0){
            menor_pos = i;
            menor_valor = valores;
        }else{
            if(valores < menor_valor){
                menor_pos = i;
                menor_valor = valores;
            }
        }
    }
    cout << menor_pos + 1 << endl;
}
