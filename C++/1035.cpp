#include <iostream>
 
using namespace std;
 
int main() {
 int a,b,c,d;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    if((b > c)&&(d > a)&&((c + d) > (a + b))&&(a%2 == 0)){
            cout << "Valores aceitos" << endl;
    }
    else
            cout << "Valores nao aceitos" << endl;
    return 0;
}