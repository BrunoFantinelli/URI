#include <iostream>
using namespace std;

int main(){
    int n, t = 1;
    int potDois = 1;
    int hanoi[31];
    for (int i = 0; i <= 30; i++){
        hanoi[i] = potDois - 1;
        potDois *= 2;
    }
    cin >> n;
    while (n != 0){
        cout << "Teste " << t++ << endl << hanoi[n] << endl << endl;
        cin >> n;
    }
    return 0;
}
