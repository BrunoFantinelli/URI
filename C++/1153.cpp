#include <iostream>
using namespace std;

int main(){
    int n,i;
    cin >> n;
    i = n - 1;
    while(i>=1){
        n = n * i;
        i--;
    }
cout << n << endl;
}
