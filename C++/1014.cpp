#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float X,Y,gasto;
    cout << fixed << setprecision(3);
    cin >> X;
    cin >> Y;
    gasto = (X/Y);
    cout << gasto << " km/l" << endl;
    return 0;
}