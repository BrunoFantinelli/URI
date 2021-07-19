#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int x,seg,m,h;
    cout << fixed << setprecision(0);
    cin >> x;
    if(x<60){
        cout << "0:0:" << x << endl;
    }
    else if(x>60&&x<3600){
        m = x/60;
        seg = x%60;
        cout << "0:" << m << ":" << seg << endl;
    }
    else if(x>3600){
        h = x/3600;
        m = (x%3600)/60;
        seg = (x%3600)%60;
        cout << h << ":" << m << ":" << seg << endl;
    }
    return 0;
}