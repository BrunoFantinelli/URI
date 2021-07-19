#include <iostream>
using namespace std;

int main(){
    int x,z,cont;
    cont = 0;
    cin >> z;
    while(cont<z){
        cin >> x;
        if(x>0&&x%2==0){
            cout << "EVEN POSITIVE" << endl;
        }
        else if(x>0&&x%2!=0){
            cout << "ODD POSITIVE" << endl;
        }
        else if(x<0&&x%2==0){
            cout << "EVEN NEGATIVE" << endl;
        }
        else if(x<0&&x%2!=0){
            cout << "ODD NEGATIVE" << endl;
        }
        else if(x==0){
            cout << "NULL" << endl;
        }
        cont++;
    }

    return 0;
}