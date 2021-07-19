#include <iostream>
#include <string.h>
#include <string>
using namespace std;

int main(){
    int x;
    int testes;
    cin >> testes;
    for(int i = 0; i < testes; i++){
        cin >> x;
        string entrada[x];
        bool resultado = true;
        for(int z = 0; z < x; z++){
            cin >> entrada[z];
        }

        for(int j = 0; j < x; j++){
            for(int k = 0; k < x; k++){
                if(entrada[j] != entrada[k]){
                    resultado = false;
                }
            }
        }
        if(resultado == true){
            cout << entrada[0] << endl;
        }else{
            cout << "ingles" << endl;
        }
    }

}
