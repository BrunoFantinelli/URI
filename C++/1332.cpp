#include <iostream>
#include <string>

using namespace std;

int main(){
    string num;
    int teste;
    cin >> teste;
    for(int i = 0; i < teste; i++){
        cin >> num;
        if(num.length() == 5){
            cout << "3" << endl;
        }else{
            if(num[0] == 'o' && num[1] == 'n'){
                cout << "1" << endl;
            }else if(num[1] == 'n' && num[2] == 'e'){
                cout << "1" << endl;
            }else if(num[0] == 'o' && num[2] == 'e'){
                cout << "1" << endl;
            }else{
                cout << "2" << endl;
            }


        }
    }
    return 0;
}
