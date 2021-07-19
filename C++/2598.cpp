#include <iostream>
using namespace std;

int main(){
    int qtd, tamanho, radares;
    cin >> qtd;
    for(int i = 0; i < qtd; i++){
        cin >> tamanho >> radares;
        int result = tamanho/radares;
        if(tamanho%radares != 0){
            result++;
        }
        cout << result << endl;
    }
}
