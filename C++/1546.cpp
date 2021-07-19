#include <iostream>
using namespace std;

int main(){
    int dias, rec, pessoa;
    cin >> dias;
    for(int i = 0; i < dias; i++){
        cin >> rec;
        for(int j = 0; j < rec; j++){
            cin >> pessoa;
            if(pessoa == 1){
                cout << "Rolien" << endl;
            }else if(pessoa == 2){
                cout << "Naej" << endl;
            }else if(pessoa == 3){
                cout << "Elehcim" << endl;
            }else if(pessoa == 4){
                cout << "Odranoel" << endl;
            }

        }
    }
    return 0;
}
