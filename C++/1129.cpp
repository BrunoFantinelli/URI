#include <iostream>
using namespace std;

int main(){
    int resp[5],total = 0,testes;
    char marc;
    cin >> testes;
    while(testes != 0){
        for(int j = 0; j < testes; j++){
        for(int i = 0; i < 5; i++){
            cin >> resp[i];
            if(resp[i] <= 127){
                switch(i){
                case 0:
                    marc = 'A';
                    break;

                case 1:
                    marc = 'B';
                    break;
                case 2:
                    marc = 'C';
                    break;
                case 3:
                    marc = 'D';
                    break;
                case 4:
                    marc = 'E';
                    break;
                }
                total++;
            }
        }

        if(total == 1){
            cout << marc << endl;
        }else{
            cout << "*" << endl;
        }
        total = 0;
        }
        cin >> testes;
    }
    return 0;
}