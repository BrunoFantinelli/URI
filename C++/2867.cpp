#include <iostream>
#include <math.h>
#include <string>
#include <sstream>

using namespace std;

int main(){
    int testes;
    int x,y;
    cin >> testes;
    for (int i = 0; i < testes; i++){
        cin >> x >> y;
        int resultado = y * log10( x );
        cout << resultado + 1 << endl;
    }

}