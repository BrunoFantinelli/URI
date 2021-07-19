#include <iostream>
using namespace std;

int main(){
    int x,x1,y,z,cont;
    cin >> x;
    z = 0;
    cont = 1;
    while(z<=x){
        cin >> z;
    }
    x1 = x++;
    do{
        x = x + x1;
        cont++;
        x1++;
        }while(z>x);
    cout << cont << endl;
    return 0;
}