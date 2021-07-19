#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float nota2,nota,nota_valida,media;
    int novo = 0;
    cout << fixed << setprecision(2);
    nota2 = nota = nota_valida = 0;
    while(novo != 2){
    while(nota_valida<2){
        cin >> nota;
        if(nota>=0&&nota<=10){
            nota_valida++;
            nota2 = nota + nota2;
        }
        else
            cout << "nota invalida" << endl;
    }
    media = nota2/2;
    cout << "media = " << media << endl;
    cout << "novo calculo (1-sim 2-nao)" << endl;
    cin >> novo;
    if(novo != 1 && novo != 2){
    while(novo != 1 && novo != 2){
    cout << "novo calculo (1-sim 2-nao)" << endl;
    cin >> novo;
    }
    }
    nota2 = nota = nota_valida = media = 0;
    }
    return 0;
}