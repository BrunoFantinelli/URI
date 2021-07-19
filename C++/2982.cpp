#include <iostream>
using namespace std;

int main(){
    int x,valor, total = 0;
    char op;
    cin >> x;
    for(int i = 0; i < x; i++){
        cin >> op >> valor;
        if(op == 'G'){
            total -= valor;
        }else if(op == 'V'){
            total += valor;
        }
    }

    if(total < 0){
        cout << "NAO VAI TER CORTE, VAI TER LUTA!" << endl;
    }else {
        cout << "A greve vai parar." << endl;
    }
}