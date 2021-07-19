#include <iostream>
using namespace std;

int main(){
    string cpf;
    int a1,a2,a3,a4,a5,a6,a7,a8,a9,b1,b2;
    int resb1, resb2;
    while(cin >> cpf){
        a1 = cpf[0] - 48;
        a2 = cpf[1] - 48;
        a3 = cpf[2] - 48;
        a4 = cpf[4] - 48;
        a5 = cpf[5] - 48;
        a6 = cpf[6] - 48;
        a7 = cpf[8] - 48;
        a8 = cpf[9] - 48;
        a9 = cpf[10] - 48;
        b1 = cpf[12] - 48;
        b2 = cpf[13] - 48;
        resb1 = ((a1*1) + (a2*2) + (a3*3) + (a4*4) + (a5*5) + (a6*6) + (a7*7) + (a8*8) + (a9*9)) % 11;
        if(resb1 == 10){
            resb1 = 0;
        }
        resb2 = ((a1*9) + (a2*8) + (a3*7) + (a4*6) + (a5*5) + (a6*4) + (a7*3) + (a8*2) + (a9*1)) % 11;
        if(resb2 == 10){
            resb2 = 0;
        }
        if(resb1 == b1 && resb2 == b2){
            cout << "CPF valido" << endl;
        }else{
            cout << "CPF invalido" << endl;
        }
    }
}