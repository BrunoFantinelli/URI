#include <iostream>
using namespace std;

int main(){
    int testes, ano, dif;
    cin >> testes;
    for(int i = 0; i < testes; i++){
        cin >> dif;
        if(dif < 2015){
            ano = 2015 - dif;
            cout << ano << " D.C." << endl;
        }
        else{
            ano = dif - 2014;
            cout << ano << " A.C." << endl;
        }
    }
    return 0;
}
