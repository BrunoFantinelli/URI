#include <iostream>
using namespace std;

int main(){
    int x;
    int z,y;
    int soma = 0;
    cin >> x;
    for(int i = 0; i < x; i++){
        cin >> z >> y;
        soma += z*y;
    }
    cout << soma << endl;
}
