#include <iostream>
using namespace std;

int main(){
    int x, soma = 0;
    for(int i = 0; i < 9; i++){
        cin >> x;
        soma += x;
    }

    while(true){
        if(soma <= 9){
            break;
        }else{
        soma -= 9;
        }
    }

    if(soma == 1){
        cout << "Dasher" << endl;
    }else if(soma == 2){
        cout << "Dancer" << endl;
    }else if(soma == 3){
        cout << "Prancer" << endl;
    }else if(soma == 4){
        cout << "Vixen" << endl;
    }else if(soma == 5){
        cout << "Comet" << endl;
    }else if(soma == 6){
        cout << "Cupid" << endl;
    }else if(soma == 7){
        cout << "Donner" << endl;
    }else if(soma == 8){
        cout << "Blitzen" << endl;
    }else if(soma == 9){
        cout << "Rudolph" << endl;
    }
}
