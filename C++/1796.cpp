#include <iostream>
using namespace std;

int main(){
    int test,x,y,n;
    y = n = 0;
    cin >> test;
    for(int i = 0; i < test; i++){
        cin >> x;
        if(x == 1){
            n++;
        }
        else if(x == 0){
            y++;
        }
    }
    if(y > n){
        cout << "Y" << endl;
    }else{
        cout << "N" << endl;
    }
    return 0;
}
