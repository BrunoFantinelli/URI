#include <iostream>
#include <string>
using namespace std;

int main(){
    int n, total = 0;
    string entrada;
    while(cin >> n){
        cin >> entrada;
        for(int i = 0; i < n; i++){
            if(entrada[i] == '1'){
                total += 1;
            }else if(entrada[i] == '2'){
                total += 2;
            }else if(entrada[i] == '3'){
                total += 3;
            }else if(entrada[i] == '4'){
                total += 4;
            }else if(entrada[i] == '5'){
                total += 5;
            }else if(entrada[i] == '6'){
                total += 6;
            }else if(entrada[i] == '7'){
                total += 7;
            }else if(entrada[i] == '8'){
                total += 8;
            }else if(entrada[i] == '9'){
                total += 9;
            }
        }
        if(total%3 == 0){
            cout << total << " sim" << endl;
            total = 0;
        }else
            cout << total << " nao" << endl;
            total = 0;
        }
    return 0;
}
