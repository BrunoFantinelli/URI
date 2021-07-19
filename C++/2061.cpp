#include <iostream>
using namespace std;

int main(){
int abas, acoes;
string teste;
cin >> abas >> acoes;
    for(int i = 0; i < acoes; i++){
        cin >> teste;
        if(teste == "fechou"){
            abas++;
        }else if(teste == "clicou"){
            abas--;
        }
    }
    if(abas > 0){
        cout << abas << endl;
    }else{
        cout << "0" << endl;
    }
return 0;
}
