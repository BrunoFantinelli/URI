#include <iostream>
using namespace std;

int main(){
    int x,cont;
    cont = 0;
    cin >> x;
    while(cont<10000){
        if(cont%x==2){
            cout << cont << endl;
        }
        cont++;
    }

 
    return 0;
}