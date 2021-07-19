#include <iostream>
using namespace std;

int main(){
    int n ;
    int i = 1;
    cin >> n;
    while(n >= 0){
        cout << "Experiment " << i << ": " << n/2 << " full cycle(s)" << endl;
        cin >> n;
        i++;
    }
}
