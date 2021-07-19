#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double i,s,d;
    cout << fixed << setprecision(2);
    s = 0;
    for(i=1; i<=100; i++){
        d = 1/i;
        s = s + d;
    }
    cout << s << endl;

    return 0;
}