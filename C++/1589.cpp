#include <iostream>
using namespace std;

int main(){
    int t, r1, r2, b;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> r1 >> r2;
        b = r1 + r2;
        cout << b << endl;
    }
    return 0;
}
