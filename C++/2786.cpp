#include <iostream>
#include <string>

using namespace std;
int main(){
    int x,y;
    cin >> x >> y;
    cout << (x*y) + ((x-1)*(y-1)) << endl;
    if(x == 1 && y == 1){
        cout << 0 << endl;
    }else{
        cout << ((x-1)*2)+((y-1)*2) << endl;
    }
}
