#include <iostream>
using namespace std;

int main(){
    int z,n,nota,pos,menor,poss;
    poss = 0;
    pos = 0;
    menor = 100000;
    cin >> n;
    int x[n];
    for(z = 0; z < n; z++){
        cin >> nota;
        pos++;
        if(nota<menor){
            menor = nota;
            poss = pos - 1;
        }
    }
    cout << "Menor valor: " << menor << endl;
    cout << "Posicao: " << poss << endl;
    return 0;
}