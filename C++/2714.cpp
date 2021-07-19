#include <iostream>
using namespace std;

int main(){
        int tent;
        string senha,prov;
        int resp = 0;
        cin >> tent;
        cin.ignore();
        for(int i = 0; i < tent; i++){
            getline(cin, senha);
            if(senha[0] != 'R' || senha[1] != 'A' || senha.length() != 20){
                cout << "INVALID DATA" << endl;
            }else{
                for(int k = 2; k < senha.length(); k++){
                    if(senha[k] != '0'){
                        break;
                    }else{
                        resp++;
                    }
                }
                for(int z = resp+2; z < senha.length(); z++){
                    cout << senha[z];
                }
            cout << endl;
            resp = 0;
            }
        }
        return 0;
    }
