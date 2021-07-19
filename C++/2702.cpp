#include <iostream>
#include <string>

using namespace std;
int main(){
    int x[3], y[3];
    int res = 0;
    cin >> x[0] >> x[1] >> x[2];
    cin >> y[0] >> y[1] >> y[2];
    if(y[0] > x[0]){
        res += y[0] - x[0];
    }
    if(y[1] > x[1]){
        res += y[1] - x[1];
    }
    if(y[2] > x[2]){
        res += y[2] - x[2];
    }
    cout << res << endl;
}
