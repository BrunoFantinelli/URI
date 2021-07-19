#include <iostream>
using namespace std;


int main(){
    int tent;
    float x,menor = 0;
    while(cin >> tent){
        for(int i = 0; i < tent; i++){
            cin >> x;
            if(menor == 0 || x < menor){
                menor = x;
            }
        }
        cout << menor << endl;
        menor = 0;
    }
}
