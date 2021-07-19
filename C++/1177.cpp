#include <iostream>
using namespace std;

int main(){
    int x[1000],y,i,cont;
    cont = 0;
    i = 0;
    cin >> y;
    while(i<1000){
        cout << "N[" << i << "] = " << cont << endl;
        cont++;
        i++;
        if(cont==y){
            cont = 0;
        }
        }

    return 0;
}
