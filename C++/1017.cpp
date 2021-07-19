#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float a,b,c;
    cout << fixed << setprecision(3);
    cin >> a >> b;
    c = ((a*b)/12);
    cout << c << endl;
    return 0;
}