#include <iostream>
#include <string.h>
#include <string>
using namespace std;

int main(){
    string dna,codigo;
    int posicao = 0;
    while(cin >> dna){
        cin >> codigo;
        posicao = dna.find(codigo);
        if(posicao != -1){
            cout << "Resistente" << endl;
        }else{
            cout << "Nao resistente" << endl;
        }
    }

}
