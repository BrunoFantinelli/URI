#include <iostream>
using namespace std;

int main(){
    string entrada;
    int i = 0,b = 0;
    while(getline(cin,entrada)){
        for(int j = 0; j < entrada.length(); j++){
        if(entrada[j] == '_'){
            if(i == 0){
                cout << "<i>";
                i++;
            }else{
                cout << "</i>";
                i--;
            }
        }
        else if(entrada[j] == '*'){
            if(b == 0){
                cout << "<b>";
                b++;
            }else{
                cout << "</b>";
                b--;
            }
        }
        else{
            cout << entrada[j];
        }
    }
    cout << endl;
}
return 0;
}
