#include <iostream>
using namespace std;

int main(){
    int testes,x,y;
    cin >> testes;
    for(int i = 0; i < testes; i++){
        cin >> x >> y;
        cout << ((x*y)/2) << " cm2" << endl;
    }
    return 0;
}
