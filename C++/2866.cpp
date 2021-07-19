#include <iostream>
using namespace std;

int main(){
    int casos;
    string entrada, saida = "";
    cin >> casos;
    for(int i = 0; i < casos; i++){
        cin >> entrada;
        for(int j = 0; j < entrada.length(); j++){
            if(entrada[j] >= 97 && entrada[j] <= 122){
                saida += entrada[j];
            }
        }
        for(int k = saida.length()-1; k >= 0; k--){
            cout << saida[k];
        }
        cout << endl;
        saida = "";
    }
}
