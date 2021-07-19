#include <iostream>
#include <string.h>
#include <string>
using namespace std;

int main(){
    int x;
    cin >> x;
    string entrada;
    string palavras[x];
    for(int i = 0; i < x; i++){
        cin >> entrada;
        if(entrada.length() == 3 && entrada[0] == 'O' && entrada[1] == 'B'){
            palavras[i] = "OBI";
        }
        else if(entrada.length() == 3 && entrada[0] == 'U' && entrada[1] == 'R'){
            palavras[i] = "URI";
        }
        else{
            palavras[i] = entrada;
        }
    }
    for(int i = 0; i < x; i++){
        if(i+1 != x){
            cout << palavras[i] << " ";
        }else{
            cout << palavras[i] << endl;
        }
    }
}