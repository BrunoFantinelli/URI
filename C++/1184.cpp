#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double soma,m[12][12];
    char c;
    soma = 0;
    cout << fixed << setprecision(2);
    cin >> c;
        for(int i = 0; i < 12; i++){
            for(int j = 0; j < 12; j++){
            cin >> m[i][j];
            }
        }
        for(int i = 0; i < 12; i++){
            for(int j = 0; j < 12; j++){
                if(j<i){
                    soma += m[i][j];
                }
            }
        }
    cout << fixed << setprecision(1);
    if(c == 'S'){
        cout << soma << endl;
    }
    else if(c == 'M'){
        cout << soma/66 << endl;
    }

    return 0;
}
