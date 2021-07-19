#include <iostream>
#include <string.h>
using namespace std;


int main(){
    string nomes[100];
    char cmp;
    int qtd,pos = 0,neg = 0;
    cin >> qtd;
    for(int i = 0; i < qtd; i++){
        cin >> cmp >> nomes[i];
        if(cmp == '-'){
            neg++;
        }else if(cmp == '+'){
            pos++;
        }
    }
    int i;
    int j;
    string aux;
    for(i = 0; i < qtd; i++){
        for(j = 0; j < qtd; j++){
            if(strcmp(nomes[i].c_str(), nomes[j].c_str()) < 0){
                aux = nomes[j];
                nomes[j] = nomes[i];
                nomes[i] = aux;
            }
        }
    }


    for(int i = 0; i < qtd; i++){
        cout << nomes[i] << endl;
    }
    cout << "Se comportaram: " << pos << " | Nao se comportaram: " << neg << endl;

return 0;
}
