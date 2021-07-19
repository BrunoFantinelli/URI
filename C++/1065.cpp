#include <iostream>
using namespace std;

int main(){
    int x,y,z,div;
    x=y=z=0;
    while(z<5){
        cin >> x;
        z++;
        div = x%2;
        if(div==0){
            y++;
        }
    }
    cout << y << " valores pares" << endl;

    return 0;
} 