#include <iostream>
using namespace std;

int main(){
    int ano,tempo,menor;
    int qtd;
    string nome, nomeMenor;
    cin >> qtd;
    while(qtd != 0){
        for(int i = 0; i < qtd; i++){
            cin >> nome >> ano >> tempo;
            if(i == 0){
                menor = ano - tempo;
                nomeMenor = nome;
            }
            if(ano-tempo < menor){
                menor = ano-tempo;
                nomeMenor = nome;
            }
        }
        cout << nomeMenor << endl;
        cin >> qtd;
    }
}
