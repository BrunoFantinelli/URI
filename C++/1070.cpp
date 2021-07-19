#include <iostream>
using namespace std;

int main(){
    int x,cont,y;
    cin >> x;
    cont = 0;
    y = 0;
    if(x%2!=0){
    while(cont<6){
        x = x + 2;
        cout << x << endl;
        cont++;
    }
    }
    else if(x%2==0){
    y = x + 1;
    cout << y << endl;
    while(cont<5){
    y = y + 2;
    cout << y << endl;
    cont++;
    }
}
    return 0;
}