#include <iostream>
using namespace std;

int main(){
    int x,y,in,out,cont;;
    cin >> x;
    cont = 0;
    in = out = 0;
    while (x!=cont){
    cin >> y;
    if(y>=10&&y<=20){
        in++;
        }
        else out++;
    cont++;
    }
    cout << in << " in" << endl;
    cout << out << " out" << endl;
    return 0;
}