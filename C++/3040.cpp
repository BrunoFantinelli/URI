#include <iostream>

using namespace std;

int main() {
    int h,d,g,cases;
    cin >> cases;
    for(int i = 0; i< cases; i++){
        cin >> h >> d >> g;
        if(h >= 200 && h <= 300 && d >= 50 && g >= 150){
            cout << "Sim" << endl;
        }else{
            cout << "Nao" << endl;
        }
    }
}
