#include <iostream>
using namespace std;

int main(){
    int primeiro[5], segundo[5];
    bool teste = true;
    for(int i = 0; i < 5; i++){
        cin >> primeiro[i];
    }
    for(int i = 0; i < 5; i++){
        cin >> segundo[i];
    }
    for(int i = 0; i < 5; i++){
        if(primeiro[i] == segundo[i]){
            teste = false;
        }
    }

    if(teste == true){
        cout << "Y" << endl;
    }else{
        cout << "N" << endl;
    }
    return 0;
}
