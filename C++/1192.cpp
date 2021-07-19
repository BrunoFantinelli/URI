#include <iostream>
using namespace std;

int main(){
    int tentativas;
    string entrada;
    int v1,v2;
    cin >> tentativas;
    for(int i = 0; i < tentativas; i++){
        cin >> entrada;
        v1 = entrada[0] - 48;
        v2 = entrada[2] - 48;
        if(v1 == v2){
            cout << v1*v2 << endl;
        }else if(entrada[1] >= 65 && entrada[1] <= 90){
            cout << v2-v1 << endl;
        }else if(entrada[1] >= 97 && entrada[1] <= 122){
            cout << v2+v1 << endl;
        }
    }
}
