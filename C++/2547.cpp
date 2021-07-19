#include <iostream>
using namespace std;

int main(){
    int qtd,maxi,mini,x;
    int total = 0;
    while(cin >> qtd){
        cin >> mini >> maxi;
        for(int i = 0; i < qtd; i++){
            cin >> x;
            if(x >= mini && x <= maxi){
                total++;
            }
        }
    cout << total << endl;
    total = 0;
    }
}
