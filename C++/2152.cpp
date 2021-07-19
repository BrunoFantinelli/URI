#include <iostream>
#include <math.h>
#include <string>
#include <sstream>

using namespace std;

int main(){
    int h,m,o,teste;
    cin >> teste;
    for(int i = 0; i < teste; i++){
        cin >> h >> m >> o;
        if(h < 10){
            cout << "0" << h;
        }else{
            cout << h;
        }
        cout << ":";
        if(m < 10){
            cout << "0" << m;
        }else{
            cout << m;
        }

        if(o == 1){
            cout << " - A porta abriu!" << endl;
        }else{
            cout << " - A porta fechou!" << endl;
        }
    }
}