#include <iostream>
using namespace std;

int main(){
    string p1,p2;
    int tent;
    cin >> tent;
    for(int i = 0; i < tent; i++){
        cin >> p1;
        cin >> p2;
        if(p1 == p2){
            if(p1 == "ataque"){
                cout << "Aniquilacao mutua" << endl;
            }
            else if(p1 == "pedra"){
                cout << "Sem ganhador" << endl;
            }
            else if(p1 == "papel"){
                cout << "Ambos venceram" << endl;
            }
        }
        if(p1 == "ataque"){
            if(p2 == "pedra"){
                cout << "Jogador 1 venceu" << endl;
            }
        }
        if(p2 == "ataque"){
            if(p1 == "pedra"){
                cout << "Jogador 2 venceu" << endl;
            }
        }
        if(p1 == "pedra"){
            if(p2 == "papel"){
                cout << "Jogador 1 venceu" << endl;
            }
        }
        if(p2 == "pedra"){
            if(p1 == "papel"){
                cout << "Jogador 2 venceu" << endl;
            }
        }
        if(p1 == "papel"){
            if(p2 == "ataque"){
                cout << "Jogador 2 venceu" << endl;
            }
        }
        if(p2 == "papel"){
            if(p1 == "ataque"){
                cout << "Jogador 1 venceu" << endl;
            }
        }
}
return 0;
}
