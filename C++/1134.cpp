#include <iostream>
using namespace std;

int main(){
    int x,alcool,gasolina,diesel;
    x = alcool = gasolina = diesel = 0;
    while(x!=4){
        cin >> x;
        switch(x){
    case 1:
        alcool++;
        break;
    case 2:
        gasolina++;
        break;
    case 3:
        diesel++;
        break;
        }
    }
    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << alcool << endl;
    cout << "Gasolina: " << gasolina << endl;
    cout << "Diesel: " << diesel << endl;

    return 0;
}