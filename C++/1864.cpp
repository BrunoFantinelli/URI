#include <iostream>
using namespace std;

int main(){
    string frase = "LIFE IS NOT A PROBLEM TO BE SOLVED";
    int i,cont;
    cin >> i;
        for(cont = 0; cont < i; cont++){
            cout << frase[cont];
        }
    cout << endl;
    return 0;
}