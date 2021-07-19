#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n, x;
    cin >> n;
    for(int i = 0; i < n; i++){
            cin >> x;
            cout << (long long)(pow(2,x)/12000) << " kg" << endl;
    }

    return 0;
}
