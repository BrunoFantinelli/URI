#include <iostream>
using namespace std;

int main(){
    int n, tmp = 0, RPM, cnt = 0, res = 0, cndtn = 1;
    cin >> n;
    while(n--){
        cin >> RPM;
        cnt++;
        if(RPM<tmp && cndtn==1){
            res = cnt;
            cndtn = 0;
        }
        tmp = RPM;
    }
    cout << res << endl;
    return 0;
}
