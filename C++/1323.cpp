#include <iostream>
using namespace std;

int main(){
    int n, resp;
    cin >> n;
    while(n != 0){
        resp = (n*(n+1)*((2*n)+1))/6;
        cout << resp << endl;
        cin >> n;
    }
    return 0;
}
