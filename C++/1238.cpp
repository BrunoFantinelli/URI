#include <iostream>
using namespace std;

int main(){
    string entrada1, entrada2;
    int testes, fim1 = 0, fim2 = 0;
    cin >> testes;
    for(int i = 0; i < testes; i++){
        cin >> entrada1 >> entrada2;
        for(int j = 0; j < 50; j++){
            if(entrada1[j] == '\0'){
                fim1 = 1;
            }
            if(entrada2[j] == '\0'){
                fim2 = 1;
            }
            if(fim1 == 1 && fim2 == 1){
                break;
            }
            if(fim1 == 0){
                cout << entrada1[j];
            }
            if(fim2 == 0){
                cout << entrada2[j];
            }
        }
        fim1 = fim2 = 0;
        cout << endl;
    }
    return 0;
}
