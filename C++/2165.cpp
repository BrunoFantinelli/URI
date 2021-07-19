#include <iostream>
#include <math.h>
#include <string>
#include <sstream>

using namespace std;

int main(){
    string entrada;
    getline(cin, entrada);
    if(entrada.length() <= 140){
        cout << "TWEET" << endl;
    }else{
        cout << "MUTE" << endl;
    }
}

