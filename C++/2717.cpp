#include <iostream>
using namespace std;

int main(){
    int mins,x,y;
    int soma;
    cin >> mins;
    cin >> x >> y;
    soma = x + y;
    if(soma > mins){
        cout << "Deixa para amanha!" << endl;
    }else{
        cout << "Farei hoje!" << endl;
     }
     return 0;
}
