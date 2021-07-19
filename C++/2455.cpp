#include <iostream>
using namespace std;

int main(){
    int l1,c1,l2,c2;
    cin >> l1 >> c1 >> l2 >> c2;
    if(l1*c1 == l2*c2){
        cout << "0" << endl;
    }else if(l1*c1 > l2*c2){
        cout << "-1" << endl;
    }else if(l1*c1 < l2*c2){
        cout << "1" << endl;
    }
}
