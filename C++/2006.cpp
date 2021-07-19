#include <iostream>
using namespace std;

int main(){
    int com[5],resp,total = 0;
    cin >> resp;
    for(int i = 0; i < 5; i++){
        cin >> com[i];
        if(com[i] == resp){
            total++;
        }
    }
    cout << total << endl;
 
    return 0;
}