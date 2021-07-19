#include <iostream>
using namespace std;

int main(){
    int z,x,positivo,negativo,par,juninho,div;
    positivo=negativo=par=juninho=z=0;
    while(z<5){
        cin >> x;
        z++;
        if(x>0){
            positivo++;
        }
        else if(x!=0){
            negativo++;
        }
        if(x%2==0){
            par++;
        }
        else
            juninho++;
    }
    cout << par << " valor(es) par(es)" << endl;
    cout << juninho << " valor(es) impar(es)" << endl;
    cout << positivo << " valor(es) positivo(s)" << endl;
    cout << negativo << " valor(es) negativo(s)" << endl;

    return 0;
}







