#include <iostream>
using namespace std;

int main(){
    int sorteado[6], escolhidos[6];
    int total = 0;
    for(int i = 0; i < 6; i++){
        cin >> escolhidos[i];
    }

    for(int j = 0; j < 6; j++){
        cin >> sorteado[j];
    }

    for(int x = 0; x < 6; x++){
        for(int z = 0; z < 6; z++){
            if(sorteado[x] == escolhidos[z]){
                total++;
            }
        }
    }
    if(total < 3){
        cout << "azar" << endl;
    }else if(total == 3){
        cout << "terno" << endl;
    }else if(total == 4){
        cout << "quadra" << endl;
    }else if(total == 5){
        cout << "quina" << endl;
    }else if(total == 6){
        cout << "sena" << endl;
    }
}