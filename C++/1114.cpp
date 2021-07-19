#include <iostream>
using namespace std;

int main(){
    int x;
    x = 0;
    while(x!=2002){
        cin >> x;
        if(x!=2002){
            cout << "Senha Invalida" << endl;
        }
        else if(x==2002){
            cout << "Acesso Permitido" << endl;
        }
    }
    return 0;
}