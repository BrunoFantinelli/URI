#include <iostream>
using namespace std;

int main(){
    int x,y;
    y = 1;
    cin >> x;
    while(x!=y){
        if(x%y==0){
            cout << y << endl;
        }
    y++;
    }
    cout << x << endl;
    return 0;
}
