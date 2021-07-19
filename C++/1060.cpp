#include <iostream>
using namespace std;

int main(){
    float x,y,z;
    z = 0;
    y = 0;
    while (z<6){
        z++;
        cin >> x;
        if(x>0){
            y++;
        }
    }
    cout << y << " valores positivos" << endl;
    return 0;
}