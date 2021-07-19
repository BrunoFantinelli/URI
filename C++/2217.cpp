#include <iostream>
using namespace std;

int main(){
    int testes, n;
    cin >> testes;
    for(int i = 0; i < testes; i++){
        cin >> n;
        if(n%2 == 0){
            cout << "1" << endl;
        }else{
            cout << "9" << endl;
        }
    }
    return 0;
}
