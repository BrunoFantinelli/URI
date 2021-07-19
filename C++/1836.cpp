#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int iv, b, ev, level;
    int AT, DF, SP, hp;
    int testes;
    string nome;
    cin >> testes;

    for(int i = 0; i < testes; i++){
    cin >> nome >> level;
    cin >> b >> iv >> ev;
    hp = (((iv + b + ((sqrt(ev))/8) + 50) * level) / 50) + 10;
    cin >> b >> iv >> ev;
    AT = (((iv + b + (sqrt(ev)/8)) * level) / 50) + 5;
    cin >> b >> iv >> ev;
    DF = (((iv + b + (sqrt(ev)/8)) * level) / 50) + 5;
    cin >> b >> iv >> ev;
    SP = (((iv + b + (sqrt(ev)/8)) * level) / 50) + 5;

    cout << "Caso #" << i + 1 << ": " << nome << " nivel " << level << endl;
    cout << "HP: " << hp << endl;
    cout << "AT: " << AT << endl;
    cout << "DF: " << DF << endl;
    cout << "SP: " << SP << endl;
    }
    return 0;
}