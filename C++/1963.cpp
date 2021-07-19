#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float a,b,c;
    cin >> a >> b;
    cout << fixed << setprecision(2);
    c = ((b-a)*100.00)/a;
    cout << c << "%" << endl;
 
    return 0;
}