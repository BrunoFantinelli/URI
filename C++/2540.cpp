#include <iostream>
using namespace std;

int main(){
    int total,  voto,imp = 0;
    float meta;
    while(cin >> total){
        meta = total * 0.66;
        for(int i = 0; i < total; i++){
            cin >> voto;
            if(voto == 1){
                imp++;
            }
        }
        if(imp >= meta){
            cout << "impeachment" << endl;
        }else{
            cout << "acusacao arquivada" << endl;
        }
    imp = 0;
    }
    return 0;
}
