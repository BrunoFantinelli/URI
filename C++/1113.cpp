#include <iostream>
using namespace std;

int main(){
    int x,y;
    x = 0;
    y = 1;
    while(x!=y){
         cin >> x;
         cin >> y;
         if(x>y){
           cout << "Decrescente" << endl;
         }
        else if(y>x){
            cout << "Crescente" << endl;
        }
    }

    return 0;
}