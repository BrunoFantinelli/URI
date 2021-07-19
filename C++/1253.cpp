#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main(){
    int n,v;
    string cod;
    cin >> n;
    for(int i = 0; i < n; i++){
            cin >> cod;
            cin >> v;
            for(int j = 0; j < 50; j++){
                    if(cod[j] == '\0'){
                        break;
                    }
                    if((cod[j] - v) < 65){
                        printf("%c", (cod[j] - v)+ 26);
                    }
                    else{
                        printf("%c", (cod[j] - v));
                    }
            }
            cout << endl;
    }

    return 0;
}
