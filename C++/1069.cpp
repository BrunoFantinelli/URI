#include <iostream>
#include <string>
using namespace std;


int main(){
    int n, j, esq, dir;
    string linha;
    cin >> n;

    for(int i = 0; i < n; i++){
            cin >> linha;
            dir = 0;
            j = 0;
            esq = 0;
            dir = 0;
            while(true){
                        if(linha[j] == '\0') break;
                        if(linha[j] == '<') esq++;
                        if(linha[j] == '>'){
                                    if(esq > 0){
                                           dir++;
                                           esq--;
                                    }
                        }
                        j++;
            }
            cout << dir << endl;
    }
    return 0;
}