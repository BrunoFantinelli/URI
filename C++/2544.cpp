#include <iostream>
using namespace std;

int main(){
    int num, ninja = 0;
    while(cin >> num){
        if(num == 1){
            cout << "0" << endl;
        }else{
            while(num != 1){
                num = num/2;
                ninja++;
            }
            cout << ninja << endl;
            ninja = 0;
        }
    }
    return 0;
}