#include <iostream>
using namespace std;

int main(){
    for(int i = 0; i < 39; i++){
        cout << "-";
    }
    cout << endl;
    for(int j = 0; j < 5; j++){
        for(int z = 0; z < 39; z++){
            if(z == 0 || z == 38){
                cout << "|";
            }else{
            cout << " ";
            }
        }
        cout << endl;
    }

    for(int i = 0; i < 39; i++){
        cout << "-";
    }
    cout << endl;
    return 0;
}
