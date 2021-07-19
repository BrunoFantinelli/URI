#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int x,y,cont,l,cont2;
    cin >> l;
    cont = 0;
    cont2 = x = y = 1;
    while(cont<l){
        cout << cont2 << " " << x << " " << y << endl;
        cont2++;
        x = pow(cont2,2);
        y = pow(cont2,3);
        cont++;
    }

    return 0;
}