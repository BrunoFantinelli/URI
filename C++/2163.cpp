#include <iostream>
using namespace std;

int main(){
    int x,y;
    int fim_x, fim_y;
    bool result = false;
    cin >> x >> y;
    int mapa[x][y];
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            cin >> mapa[i][j];
        }
    }

    for (int i = 1; i < (x-1); i++) {
        for (int j = 1; j < (y-1); j++) {
            if(mapa[i][j] == 42){
                if(mapa[i+1][j] == 7 && mapa[i][j+1] == 7 && mapa[i-1][j] == 7 && mapa[i][j-1] == 7 && mapa[i+1][j+1] == 7 && mapa[i+1][j-1] == 7 &&mapa[i-1][j+1] == 7 &&mapa[i-1][j-1] == 7){
                    result = true;
                    fim_x = i;
                    fim_y = j;
                }
            }
        }
    }

    if(result == true){
        cout << fim_x+1 << " " << fim_y+1 << endl;
    }else{
        cout << "0 0" << endl;
    }
}