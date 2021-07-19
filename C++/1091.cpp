#include <iostream>
using namespace std;

int main(){
    int testes,x,y;
    cin >> testes;
    while(testes != 0){
        int n, m;
        cin >> n >> m;
        for(int i = 0; i < testes; i++){
            cin >> x >> y;
        if(x == n || y == m){
            cout << "divisa" << endl;
        }else if(x > n && y > m){
            cout << "NE" << endl;
        }else if(x > n && y < m){
            cout << "SE" << endl;
        }else if(x < n && y > m){
            cout << "NO" << endl;
        }else if(x < n && y < m){
            cout << "SO" << endl;
        }
        }

        cin >> testes;
    }
    return 0;
}
