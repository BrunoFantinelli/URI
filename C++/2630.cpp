#include <iostream>
using namespace std;

int main(){
    int testes,r,g,b,res;
    string tipo;
    cin >> testes;
    for(int i = 0; i < testes; i++){
        cin >> tipo;
        cin >> r >> g >> b;
        if(tipo == "eye"){
            res = (0.30*r) + (0.59*g) + (0.11*b);
            cout << "Caso #" << i+1 << ": " << res << endl;
        }else if(tipo == "mean"){
            res = (r+g+b)/3;
            cout << "Caso #" << i+1 << ": " << res << endl;
        }else if(tipo == "min"){
            if(r <= b && r <= g){
                cout << "Caso #" << i+1 << ": " << r << endl;
            }else if(b <= r && b <= g){
                cout << "Caso #" << i+1 << ": " << b << endl;
            }else{
                cout << "Caso #" << i+1 << ": " << g << endl;
            }
        }else{
            if(r >= b && r >= g){
                cout << "Caso #" << i+1 << ": " << r << endl;
            }else if(b >= r && b >= g){
                cout << "Caso #" << i+1 << ": " << b << endl;
            }else{
                cout << "Caso #" << i+1 << ": " << g << endl;
            }
        }
    }
}