#include <iostream>
using namespace std;

int main(){
    int testes, valor;
    int cont = 0;
    int numero, jogo;
    while(cin >> testes >> valor){
        for(int i = 0; i < testes; i++){
            cin >> numero >> jogo;
            if(numero == valor && jogo == 0){
                cont++;
            }
        }
        cout << cont << endl;
        cont = 0;
    }
}
