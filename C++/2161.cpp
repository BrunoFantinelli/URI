#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double n, resp = 0;
    cout << fixed << setprecision(10);
    cin >> n;
    for(int i = 0; i < n; i++){
        resp += 6;
        resp = 1/resp;
    }
    resp += 3;
    cout << resp << endl;
    return 0;
}
