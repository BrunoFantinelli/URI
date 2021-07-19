#include <iostream>
#include <math.h>
#include <string>
#include <sstream>

using namespace std;

int main(){
    int teste;
    int p1, p2;
    string nome1,nome2,op1,op2;
    cin >> teste;
    for(int i = 0; i < teste; i++){
        cin >> nome1 >> op1 >> nome2 >> op2;
        cin >> p1 >> p2;
        if((p1+p2)%2 == 0){
            if(op2 == "PAR"){
                cout << nome2 << endl;
            }else if(op1 == "PAR"){
                cout << nome1 << endl;
            }
        }else{
            if(op2 == "IMPAR"){
                cout << nome2 << endl;
            }else if(op1 == "IMPAR"){
                cout << nome1 << endl;
            }
        }
    }

}
