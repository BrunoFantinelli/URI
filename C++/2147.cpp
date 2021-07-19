#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;

int main(){
    cout << fixed << setprecision(2);
    int test;
    float tam;
    string gal;
    cin >> test;
    for(int i = 0; i < test; i++){
        cin >> gal;
        tam = gal.length();
        cout << tam * 0.01 << endl;
    }
    return 0;
}

