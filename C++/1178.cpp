#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double n[100],x;
    cout << fixed << setprecision(4);
    cin >> x;
    for(int i = 0; i<100; i++){
            cout << "N[" << i << "] = " << x << endl;
            x = x/2;
    }
    return 0;
}
