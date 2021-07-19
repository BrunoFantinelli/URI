#include <iostream>
using namespace std;

struct carne{
    int validade;
    string nome;
};

int main(){
    int quantidade;
    while(cin >> quantidade){
        carne carnes[quantidade];
        for(int i = 0; i < quantidade; i++){
            cin >> carnes[i].nome >> carnes[i].validade;
        }

        for(int j = 0; j < quantidade; j++){
            for(int k = 0; k < quantidade; k++){
                if(carnes[k].validade > carnes[j].validade){
                    carne aux = carnes[j];
                    carnes[j] = carnes[k];
                    carnes[k] = aux;
                }
            }
        }

        for(int z = 0; z < quantidade; z++){
            if(z+1 == quantidade){
                cout << carnes[z].nome << endl;
            }else{
                cout << carnes[z].nome << " ";
            }

        }
    }
}
