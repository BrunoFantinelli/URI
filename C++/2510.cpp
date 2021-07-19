#include <iostream>
using namespace std;

int main(){
    int test;
    string vilao;
    cin >> test;
    for(int i = 0; i < test; i++){
        cin >> vilao;
        if(vilao != "Batmain"){
            cout << "Y" << endl;
        }
        else{
            cout << "N" << endl;
        }
    }
    return 0;
}
