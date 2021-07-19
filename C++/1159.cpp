#include <iostream>
using namespace std;

int main(){
    int x,soma,cont;
    x = 1;
    cont = soma = 0;
    while(x!=0){
        cin >> x;
        soma = 0;
        if(x%2==0&&x!=0){
            for(soma = 0;cont < 5; cont++){
            soma = soma + x;
            x = x + 2;
        }
        cout << soma << endl;
    }
    else if(x%2!=0&&x!=0){
        x = x + 1;
            soma = 0;
            for(soma = 0;cont < 5; cont++){
            soma = soma + x;
            x = x + 2;
        }
        cout << soma << endl;
    }
    cont = 0;
}

    return 0;
}