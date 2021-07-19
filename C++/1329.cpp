#include <iostream>
using namespace std;

int main(){
    int x, mary = 0, jon = 0,pont;
    while(true){
        cin >> x;
        if(x == 0){
            return 0;
        }
        for(int i = 0; i < x; i++){
            cin >> pont;
            if(pont == 0){
                mary++;
            }else if(pont == 1){
                jon++;
            }
        }
        cout << "Mary won " << mary <<  " times and John won " << jon << " times" << endl;
        mary = 0;
        jon = 0;
    }
    return 0;
}
