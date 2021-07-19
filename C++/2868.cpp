#include <iostream>

using namespace std;

int main() {
    int x,y,z,cases,result;
    string calc, eq;
    cin >> cases;
    for(int i = 0; i < cases; i++){
        cin >> x >> calc >> y >> eq >> z;
        if(calc == "+")
            result = x + y;
        else if(calc == "-")
            result = x - y;
        else if(calc == "x")
            result = x * y;

        cout << "E";
        if(result < z){
            for(int k = result; k <  z; k++){
                cout << "r";
            }
        }else{
            for(int k = result; k > z; k--){
                cout << "r";
            }
        }
        cout << "ou!" << endl;
    }
}
