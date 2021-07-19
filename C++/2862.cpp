#include <iostream>
using namespace std;


int main(){
    int ki,x;
    cin >> x;
    for(int i = 0; i < x; i++){
        cin >> ki;
        if(ki <= 8000){
            cout << "Inseto!" << endl;
        }else{
            cout << "Mais de 8000!" << endl;
        }
    }
}
