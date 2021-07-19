#include <iostream>
using namespace std;

int main(){
    int x,y,num;
    cin >> x;
    cin >> y;
    if(x>y){
    num = y;
    while(num<=x){
        if(num!=x&&num!=y&&num%5==2||num%5==3){
            cout << num << endl;
        }
        num++;
    }
}
    else if(y>x){
        num = x;
        while(num<=y){
            if(num!=x&&num!=y&&num%5==2||num%5==3){
                cout << num << endl;
            }
            num++;
        }
    }
    return 0;
}
