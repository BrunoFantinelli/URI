#include <iostream>
using namespace std;

int main(){
    int tent, jogadores, idades[10], aux;
    cin >> tent;
    for(int i = 0; i < tent; i++){
        cin >> jogadores;
        for(int j = 0; j < jogadores; j++){
            cin >> idades[j];
        }

        for(int z = 0; z < jogadores; z++){
            for(int y = 0; y < jogadores; y++){
                if(idades[z] > idades[y]){
                    aux = idades[y];
                    idades[y] = idades[z];
                    idades[z] = aux;
                }
            }
        }
        cout << "Case " << i+1 << ": " << idades[jogadores/2] << endl;
    }
    return 0;
}
