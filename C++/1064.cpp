
#include <iostream>
using namespace std;

int main(){
    float x,y,z,media,soma;
    y=z=soma=0;
    while(z<6){
        z++;
        cin >> x;
        if(x>0){
            y++;
            soma = soma + x;
            media = soma/y;
        }
    }
    cout << y << " valores positivos" << endl;
    cout << media << endl;
    return 0;
}