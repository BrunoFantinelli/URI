#include <iostream>
#include <cctype>
using namespace std;

int main(){
    string a;
    string up;
    string low;
    while(getline(cin,a)){
        int ant = 1;
        for(int i = 0; i < a.size(); i++){
            if(ant == 1 && a[i] != ' '){
                up = toupper(a[i]);
                ant = 0;
                cout << up;
            }else if(a[i]== ' '){
            cout << ' ';
            }       else if(ant == 0 && a[i] != ' '){
            low = tolower(a[i]);
            ant = 1;
            cout << low;
            }
        }   cout << endl;
    }

    return 0;
}