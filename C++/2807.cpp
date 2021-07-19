#include <iostream>
using namespace std;

int main(){
    int fib[40];
    int entrada;
    fib[0] = fib[1] = 1;
    for(int i = 2; i < 40; i++){
        fib[i] = fib[i-1] + fib[i-2];
    }
    cin >> entrada;
    for(int i = entrada-1; i >= 0; i--){
        cout << fib[i];
        if(i != 0){
        cout << " ";
        }
    }
    cout << endl;
}
