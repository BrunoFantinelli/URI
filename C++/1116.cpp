#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float x,y,resultado,teste,cont;
    cout << fixed << setprecision(1);
    cin >> teste;
    cont = x = y = resultado = 0;
    while(cont<teste){
        cin >> x;
        cin >> y;
        if(y!=0){
    resultado = x/y;
    cout << resultado << endl;
        }
        else{
            cout << "divisao impossivel" << endl;
        }
    cont++;
    }
    return 0;
}