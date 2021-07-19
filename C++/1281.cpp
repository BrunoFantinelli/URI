#include <iostream>
#include <iomanip>
using namespace std;

struct produtos {
    string nome;
    float preco;
};

int main(){
    cout << fixed << setprecision(2);
    int qtd,numeroProd,qtdComprado;
    string item;
    float valor, valorfinal = 0;
    cin >> qtd;
    for(int i = 0; i < qtd; i++){
        cin >> numeroProd;
        produtos lista[numeroProd];
        for(int j = 0; j < numeroProd; j++){
            cin >> item >> valor;
            lista[j].nome = item;
            lista[j].preco = valor;
        }

        int produtosComprados;
        cin >> produtosComprados;
        for(int k = 0; k < produtosComprados; k++){
            cin >> item >> qtdComprado;
            for(int z = 0; z < numeroProd; z++){
                if(lista[z].nome == item){
                    valorfinal += lista[z].preco * qtdComprado;
                }
            }
        }
        cout << "R$ " << valorfinal << endl;
        valorfinal = 0;
    }
}