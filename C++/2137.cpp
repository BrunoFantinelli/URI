#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main(){
    int x;
    int aux;
    while(cin >> x){
        int numeros[x];
        for(int i = 0; i < x; i++){
            cin >> numeros[i];
        }

        for(int j = 0; j < x; j++){
            for(int k = 0; k < x; k++){
                if(numeros[j] < numeros[k]){
                    aux = numeros[j];
                    numeros[j] = numeros[k];
                    numeros[k] = aux;
                }
            }
        }

        for(int k = 0; k < x; k++){
            if(numeros[k] > 999){
                cout << numeros[k] << endl;
            }else if(numeros[k] < 1000 && numeros[k] > 99){
                cout << "0" << numeros[k] << endl;
            }else if(numeros[k] < 100 && numeros[k] > 9){
                cout << "00" << numeros[k] << endl;
            }else if(numeros[k] < 10){
                cout << "000" << numeros[k] << endl;
            }

        }
    }
}