#include <iostream>
using namespace std;

int main(){
    int x,cont;
    cin >> x;
    for(cont = 0; cont < x; cont++){
            cout << "Ho";
            if(cont+1!=x){
                cout << " ";
            }
    }
    cout << "!" << endl;
    return 0;
}