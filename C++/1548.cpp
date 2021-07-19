#include <iostream>
using namespace std;

int main(){
    int testes, alunos, aux, trocas = 0;
    cin >> testes;
    for(int i = 0; i < testes; i++){
        cin >> alunos;
        int lista[alunos];
        int lista2[alunos];
        for(int z = 0; z < alunos; z++){
            cin >> lista[z];
            lista2[z] = lista[z];
        }
        for(int j = 0; j < alunos; j++){
            for(int k = 0; k < alunos; k++){
                if(lista[j] > lista[k]){
                    aux = lista[j];
                    lista[j] = lista[k];
                    lista[k] = aux;
                }
            }
        }
        for(int i = 0; i < alunos; i++){
            if(lista[i] != lista2[i]){
                trocas++;
            }
        }
        cout << alunos-trocas << endl;
        trocas = 0;
    }

}
