#include <iostream>
#include <math.h>
#include <string>
#include <sstream>

using namespace std;

int main(){
    string entrada;
    getline(cin, entrada);
    if(entrada.length() <= 80){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}

