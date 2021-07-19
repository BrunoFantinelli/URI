#include <iostream>
using namespace std;

int main(){
    int w1,w2,r,casos = 0;
    float total,tudo = 0;
    cin >> w1 >> w2 >> r;
    while(w1 != 0 && w2 != 0 && r != 0){
        total = (w1*(1 + r/30.0) + w2*(1 + r/30.0))/2.0;
        if(total > 60){
            cout << "AQUI E BODYBUILDER!!" << endl;
        }else if(total <= 60 && total >= 40){
            cout << "Ta saindo da jaula o monstro!" << endl;
        }else if(total < 40 && total >= 14){
            cout << "Bora, hora do show! BIIR!" << endl;
        }else if(total < 14 && total >= 13){
            cout << "E 13" << endl;
        }else if(total < 13 && total >= 1){
            cout << "Nao vai da nao" << endl;
        }
        tudo += total;
        casos++;
        cin >> w1 >> w2 >> r;
    }
    float media = tudo/casos;
    if(media > 40){
        cout << endl;
        cout << "Aqui nois constroi fibra rapaz! Nao e agua com musculo!" << endl;
    }
    return 0;
}