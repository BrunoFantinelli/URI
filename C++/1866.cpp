#include <iostream>
using namespace std;

int main(){
    int casos,cont,x;
    cin >> casos;
    cont = 0;
    while(cont<casos){
        cin >> x;
        if(x%2==0){
            cout << "0" << endl;
        }
        else{
            cout << "1" << endl;
        }
        cont++;
    }
    return 0;
}