#include <iostream>
using namespace std;

int main(){
    int x,contador,pos,maior;
    contador = pos = x = maior = 0;
    while(contador<=100){
        cin >> x;
        if(x>maior){
            maior = x;
            pos = contador + 1;
        }
        contador++;
    }
cout << maior << endl;
cout << pos << endl;

 
    return 0;
}