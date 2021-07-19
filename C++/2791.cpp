#include <iostream>
using namespace std;

int main(){
    int x[4];
    for(int i = 0; i < 4; i++){
        cin >> x[i];
    }
    for(int i = 0; i < 4; i++){
        if(x[i] == 1){
            cout << i+1 << endl;
        }
    }
}
