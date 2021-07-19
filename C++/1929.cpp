#include <iostream>
using namespace std;


int main(){
    int a[4],aux,f, g;
    for(int i = 0; i < 4; i++){
        cin >> a[i];
    }

    for(int j = 0;j < 4; j++){
        for(int k = j+1; k<4; k++){
            if(a[k]<a[j]){
                aux=a[j];
                a[j]=a[k];
                a[k]=aux;
            }
        }
    }
    g=a[1]+a[2];
    f=a[0]+a[1];
    if(a[3]<g || a[2]<f){
        cout << "S" << endl;
    }else{
        cout << "N" << endl;
    }
    return 0;
}
