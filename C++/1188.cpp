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
        for(int i = 11; i >10; i--){
            for(int j = 1; j < 11; j++){
                soma += m[i][j];
            }
    }
        for(int i = 10; i > 9; i--){
            for(int j = 2; j < 10; j++){
                soma += m[i][j];
            }
    }
        for(int i = 9; i > 8; i--){
            for(int j = 3; j < 9; j++){
                soma += m[i][j];
            }
    }
        for(int i = 8; i > 7; i--){
            for(int j = 4; j < 8; j++){
                soma += m[i][j];
            }
    }
        for(int i = 7; i > 6; i--){
            for(int j = 5; j < 7; j++){
                soma += m[i][j];
            }
    }
    cout << fixed << setprecision(1);
    if(c == 'S'){
        cout << soma << endl;
    }
    else if(c == 'M'){
        cout << soma/30 << endl;
    }

    return 0;
}