#include <iostream>
#include <string>
using namespace std;

int main(){
    string entrada;
    cin >> entrada;
    for(int i = 0; i < entrada.length();i++){
        if(entrada[i]>=65 && entrada[i]<=90){
                entrada[i] = entrada[i]+32;
        }
    }
    size_t found = entrada.find("zelda");
    if(found!= string::npos){
        cout << "Link Bolado" << endl;
    }
    else{
        cout<< "Link Tranquilo" << endl;
    }
}
 