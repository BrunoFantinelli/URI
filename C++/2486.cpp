#include <iostream>
using namespace std;

int main(){
    int teste;
    int qtd, soma = 0;
    string comida;
    cin >> teste;
    cin.ignore();
    while(teste != 0){
        for(int i = 0; i < teste; i++){
        cin >> qtd;
        cin.ignore();
        getline(cin,comida);
            if(comida == "suco de laranja"){
                soma+= 120*qtd;
            }else if(comida == "morango fresco"){
                soma += 85*qtd;
            }else if(comida == "mamao"){
                soma += 85*qtd;
            }else if(comida == "goiaba vermelha"){
                soma += 70*qtd;
            }else if(comida == "manga"){
                soma += 56*qtd;
            }else if(comida == "laranja"){
                soma += 50*qtd;
            }else if(comida == "brocolis"){
                soma += 34*qtd;
            }
        }
        if(soma >= 110 && soma <= 130){
            cout << soma << " mg" << endl;
        }else if(soma < 110){
            int novo = 110 - soma;
            cout << "Mais " << novo << " mg" << endl;
        }else if(soma > 130){
            int novo = soma - 130;
            cout << "Menos " << novo << " mg" << endl;
        }
        soma = 0;
        cin >> teste;
    }
}