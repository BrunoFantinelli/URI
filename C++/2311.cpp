#include <iostream>
#include <iomanip>
using namespace std;

struct competidor{
    string nome;
    double resultado = 0;
    double notas[7];
};

int main(){
    int casos;

    double resultado;
    double peso;
    cout << fixed << setprecision(2);
    cin >> casos;
    competidor comp[casos];
    for(int i = 0; i < casos; i++){
        cin >> comp[i].nome;
        cin >> peso;
        for(int k = 0; k < 7; k++){
            cin >> comp[i].notas[k];
        }

        for(int x = 0; x < 7; x++){
            for(int z = 0; z < 7; z++){
                if(comp[i].notas[x] > comp[i].notas[z]){
                    double aux = comp[i].notas[x];
                    comp[i].notas[x] = comp[i].notas[z];
                    comp[i].notas[z] = aux;
                }
            }
        }

        for(int a = 1; a < 6; a++){
            resultado += comp[i].notas[a];
        }
        resultado = peso * resultado;
        comp[i].resultado = resultado;
        resultado = 0;
    }

    for(int b = 0; b < casos; b++){
        cout << comp[b].nome << " " << comp[b].resultado << endl;
    }
}