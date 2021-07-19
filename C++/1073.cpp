#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    int i, x;
    cout << fixed << setprecision(0);
    cin >> x;

    for ( i = 1; i < x; i++)
    {
        i = i + 1;
        cout << i << "^2" << " = " << pow(i,2) << endl;
    }
    return 0;
}
