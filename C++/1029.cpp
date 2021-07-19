#include <iostream>
using namespace std;

int cont;
int fibonacci(int n){
    cont++;
    if(n == 0) return 0;
    if(n == 1) return 1;
    else return fibonacci(n-1) + fibonacci(n-2);
}
int main(){
    int tent, valor;
    cin >> tent;
    for(int i = 0; i < tent; i++){
            cin >> valor;
            cont = 0;
            cout << "fib(" << valor << ") = " << cont-1 << " calls = " << fibonacci(valor) << endl;
    }
    return 0;
}

