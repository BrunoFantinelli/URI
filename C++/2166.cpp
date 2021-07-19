#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double n, res = 0.0;
    cin >> n;
    cout << fixed << setprecision(10);
    while(n--){
        res +=2.0;
        res = 1.0/res;
    }
    res += 1.0;
    cout << res << endl;
    return 0;
}
