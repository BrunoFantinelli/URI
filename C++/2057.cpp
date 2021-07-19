#include <iostream>
using namespace std;

int main(){
    int x,y,z,total;
    cin >> x >> y >> z;
    total = x + y + z;
    if(total >= 24){
        cout << total-24 << endl;
    }else if(total < 0){
        cout << total+24 << endl;
    }else{
        cout << total << endl;
    }
}
