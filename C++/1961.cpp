#include <iostream>
using namespace std;

int main(){
    int p, q, cnt=0, i, dif;
    cin >> p >> q;
    int pulo[q];
    for(i=0; i<q; i++){
        cin >> pulo[i];
    }
    for(i=1; i<q; i++){
        if(pulo[i]>pulo[i-1]){
            dif = (pulo[i] - pulo[i-1]);
        }
        else{
            dif = (pulo[i-1] - pulo[i]);
        }
        if(dif<=p){
            cnt++;
        }
    }
    if(cnt== q-1)
        cout << "YOU WIN" << endl;
    else
        cout << "GAME OVER" << endl;
    return 0;
}
