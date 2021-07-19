#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int tent, x, y, beto, carlos, fael;
    cin >> tent;
    for(int i = 0; i < tent; i++){
        cin >> x >> y;
        beto = (2*pow(x,2))+(pow(5*y,2));
        carlos = (-100*x) + pow(y,3);
        fael = pow(3*x,2) + pow(y,2);
        if(fael > carlos && fael > beto){
            cout << "Rafael ganhou" << endl;
        }
        else if(carlos > fael && carlos > beto){
            cout << "Carlos ganhou" << endl;
        }
        else if(beto > fael && beto > carlos){
            cout << "Beto ganhou" << endl;
        }
    }

    return 0;
}

