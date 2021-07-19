#include <iostream>
using namespace std;

int main(){
    int cont,x,y,soma,i;
    soma = 0;
    cont = 0;
    cin >> y;
    while(cont<y){
        cin >> x;
        for(i = 1; i<x;i++){
            if(x%i==0){
                soma = soma + i;
            }
        }
        if(soma==x){
            cout << x << " eh perfeito" << endl;
        }
        else{
            cout << x << " nao eh perfeito" <<  endl;
        }
    cont++;
    soma = 0;
    }

    return 0;
}