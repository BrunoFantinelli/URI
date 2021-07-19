#include <iostream>
using namespace std;

int main(){
    int letras, tent;
    cin >> letras >> tent;
    char coluna1[letras],coluna2[letras];
    string entrada;
    for(int i = 0; i < letras; i++){
        cin >> coluna1[i] >> coluna2[i];
    }
    for(int j = 0; j <= tent; j++){
        getline(cin,entrada);
        for(int k = 0; k < entrada.length(); k++){
            for(int z = 0; z < letras; z++){
                if(entrada[k] == coluna1[z]){
                    entrada[k] = coluna2[z];
                }else if(entrada[k] == coluna2[z]){
                    entrada[k] = coluna1[z];
                }
            }
        }
        if(j != 0){
        cout << entrada << endl;
        }
    }
    return 0;
}
