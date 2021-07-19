#include <iostream>
#include <string>
using namespace std;

int main(){
    string entrada,saida;
    int teste;
    cin >> teste;
    cin.ignore();
    for(int i = 0; i < teste; i++){
        getline(cin, entrada);
        for(int j = 0; j < entrada.length(); j++){
            if(entrada[j] >= 65 && entrada[j] <= 90){
                entrada[j] += 3;
            }else if(entrada[j] >= 97 && entrada[j] <= 122){
                entrada[j] += 3;;
            }
        }
        int aux = 0;
        for(int k = entrada.length() - 1; k >= 0; k--){
            saida[aux] = entrada[k];
            aux++;

        }
        for(int z = (entrada.length()/2); z < entrada.length(); z++){
            saida[z] -= 1;
        }

        for(int y = 0; y < entrada.length(); y++){
            cout << saida[y];
        }
        cout << endl;
    }
    return 0;
}
