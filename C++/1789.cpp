#include <iostream>

using namespace std;

int main(){
    int total,velocidade,maior = 0;
    cin >> total;
        while (!cin.eof()){
            for(int cont = 0; cont < total; cont++){
                cin >> velocidade;
                if(velocidade>maior){
                    maior = velocidade;
                }
            }
            if(maior<10){
                cout << "1" << endl;
            }
            else if(maior>=10&&maior<20){
                cout << "2" << endl;
            }
            else if(maior>=20){
                cout << "3" << endl;
            }
            cin >> total;
            maior = 0;
}
return 0;
}
