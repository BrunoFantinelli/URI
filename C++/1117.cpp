#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float nota2,nota,nota_valida,media;
    cout << fixed << setprecision(2);
    nota2 = nota = nota_valida = 0;
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
    return 0;
}