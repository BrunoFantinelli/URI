#include <iostream>
 
using namespace std;
 
int main() {
 
    int x, n, a,soma=0;
    cin >> x >> n;
    while(n<=0)
        cin >> n;
    for(a=1; a<=n; a++){
        soma+=x;
        x++;
    }
    cout << soma << endl;
 
    return 0;
}