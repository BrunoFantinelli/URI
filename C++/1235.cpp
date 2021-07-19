#include <iostream>
#include <string>

using namespace std;

int main(){
    string entrada;
    int tent, tam;
    cin >> tent;
    for(int i = 0; i <= tent; i++){
        getline(cin, entrada);
        tam = entrada.length();
        for(int j = (tam/2) - 1; j >= 0; j--){
            cout << entrada[j];
        }
        for(int k = entrada.length() - 1; k != (tam/2) - 1; k--){
            cout << entrada[k];
        }
        if(i != 0){
        cout << endl;
        }
    }
    return 0;
}
