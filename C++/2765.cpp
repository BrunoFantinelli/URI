#include <iostream>
#include <string>
using namespace std;

int main(){
    string entrada;
    getline(cin,entrada);
    for(int i = 0; i < entrada.length(); i++){
        if(entrada[i] == ','){
            cout << endl;
        }else{
            cout << entrada[i];
        }
    }
    cout << endl;
    return 0;
}
