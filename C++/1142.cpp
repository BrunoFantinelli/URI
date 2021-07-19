#include <iostream>
using namespace std;

int main(){
    int x,linha,z;
    cin >> x;
    linha = 0;
    z = 1;
    while(x>linha){
    cout << z++;
    cout << " " << z++;
    cout << " " << z++;
    cout << " PUM" << endl;
    z++;
    linha++;
    }
    return 0;
}