#include <iostream>
using namespace std;

int main(){
    int testes,alunos[10],total_alunos,camisa,camisa_mais,camisa_menos;
    bool fim = false;
    cin >> testes;
    for(int i = 0; i < testes; i++){
        fim = false;
        cin >> total_alunos >> camisa;
        camisa_mais = camisa_menos = camisa;
        for(int j = 0; j < total_alunos; j++){
            cin >> alunos[j];
        }

        while(true){
        for(int z = 0; z < total_alunos; z++){
            if(camisa == alunos[z] || camisa_menos == alunos[z] || camisa_mais == alunos[z]){
                cout << z+1 << endl;
                fim = true;
                break;
            }
        }
        camisa_menos--;
        camisa_mais++;
        if(fim == true){
            break;
        }
        }
    }
    return 0;
}
