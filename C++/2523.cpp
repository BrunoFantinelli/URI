#include <iostream>
using namespace std;

int main(){
    string letras;
    int letra;
    int total;
    while(cin >> letras){
        cin >> total;
        for(int i = 0; i < total; i++){
            cin >> letra;
            cout << letras[letra-1];
        }
        cout << endl;
    }

 
    return 0;
}