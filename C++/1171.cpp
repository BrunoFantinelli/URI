#include <iostream>
using namespace std;

struct Lista {
    int valor = 0;
    int qtd = 0;
};

int main(){
    int x;
    cin >> x;
    Lista lista[x];
    for(int i = 0; i < x; i++){
        int aux, op = 0;
        cin >> aux;
        for(int j = 0; j < x; j++){
            if(lista[j].valor == aux){
                lista[j].qtd++;
                op = 1;
            }
        }
        if(op == 0){
            for(int k = 0; k < x; k++){
                if(lista[k].valor == 0){
                    lista[k].valor = aux;
                    lista[k].qtd = 1;
                    break;
                }
            }
        }
    }

    for(int a = 0; a < x; a++){
        for(int b = 0; b < x; b++){
            if(lista[b].valor > lista[a].valor){
                Lista aux = lista[b];
                lista[b] = lista[a];
                lista[a] = aux;
            }
        }
    }

    for(int z = 0; z < x; z++){
        if(lista[z].valor != 0){
            cout << lista[z].valor << " aparece " << lista[z].qtd << " vez(es)" << endl;
        }
    }
}