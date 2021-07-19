#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float soma,m[12][12];
    int L;
    char c;
    soma = 0;
    cout << fixed << setprecision(1);
    cin >> L;
    cin >> c;
        for(int i = 0; i < 12; i++){
            for(int j = 0; j < 12; j++){
            cin >> m[i][j];
            }
        }
        for(int j = 0; j < 12; j++){
            soma += m[L][j];
    }
    if(c == 'S'){
        cout << soma << endl;
    }
    else if(c == 'M'){
        cout << soma/12 << endl;
    }
    return 0;
}