#include <iostream>
using namespace std;

int main(){
    float a,b,c;
    cin >> c;
    cin >> b;
    cin >> a;
    if (a>b&&b>=c){
    cout << c << endl;
    cout << b << endl;
    cout << a << endl;
    }
    else if(b>=a&&b>c&&a>=c){
        cout << c << endl;
        cout << a << endl;
        cout << b << endl;
    }
    else if(b>a&&b>=c&&a<=c){
        cout << a << endl;
        cout << c << endl;
        cout << b << endl;
    }
    else if(b>a&&b<=c){
        cout << a << endl;
        cout << b << endl;
        cout << c << endl;
    }
    else if(b<a&&a<c){
        cout << b << endl;
        cout << a << endl;
        cout << c << endl;
    }
    else if(b<c&&c<=a){
        cout << b << endl;
        cout << c << endl;
        cout << a << endl;
    }
    else if(a==b&&b==a){
        cout << a << endl;
        cout << b << endl;
        cout << c << endl;
    }
    cout << "\n";
    cout << c << "\n" << b << "\n" << a << endl;
    return 0;
}