#include <iostream>
using namespace std;

int main(){
    int test, X, Y, a, b, c, d, e;
    cin >> test;
    for(a=1; a<=test; a++){
        cin >> X >> Y;
        if(X%2==1){
            c=0;
            for(b=1; b<=Y; b++){
                c+=X;
                X+=2;
            }
            cout << c << endl;
        }
        else{
            X++;
            c=0;
            for(b=1; b<=Y; b++){
                c+=X;
                X+=2;
            }
            cout << c << endl;
        }
    }
    return 0;
}
