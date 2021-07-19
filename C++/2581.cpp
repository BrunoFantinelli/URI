#include <iostream>
using namespace std;

int main(){
    string perg, resp;
    int test;
    resp = "I am Toorg!";
    cin >> test;
    for(int i = 0; i < test; i++){
        cin.ignore();
        cin >> perg;
        cout << resp << endl;
    }

    return 0;
}
