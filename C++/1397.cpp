#include <iostream>
using namespace std;

int main(){
    int testes,dir,esq,dir_total = 0,esq_total = 0;
    cin >> testes;
    while(testes != 0){
        for(int i = 0; i < testes; i++){
            cin >> esq >> dir;
            if(esq > dir){
                esq_total++;
            }else if(dir > esq){
                dir_total++;
            }
        }
        cout << esq_total << " " << dir_total << endl;
        esq_total = dir_total = 0;
        cin >> testes;
    }
    return 0;
}
