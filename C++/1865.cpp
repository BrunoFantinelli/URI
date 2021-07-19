#include <iostream>
using namespace std;

int main(){
    string nome;
    int teste,newton,cont = 0;
    cin >> teste;
    while(cont<teste){
        cin >> nome;
        cin >> newton;
        if(nome == "Thor"){
            cout << "Y" << endl;
        }
        else{
            cout << "N" << endl;
        }
        cont++;
    }
 
    return 0;
}