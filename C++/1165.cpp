#include <iostream>
using namespace std;

int main(){
    int testes,x,cont,y,primo;
    cin >> testes;
    cont = primo = 0;
    while(cont<testes){
        cin >> x;
        for(y = 1; y<=x; y++){
            if(x%y==0){
                primo++;
            }
        }
        if(primo==2){
            cout << x << " eh primo" << endl;
        }
        else{
            cout << x << " nao eh primo" << endl;
        }
        cont++;
        primo = 0;
    }
    return 0;
}