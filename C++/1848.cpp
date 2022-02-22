#include <iostream>

using namespace std;

int calculate(string binary){
    if(binary == "---"){
        return 0;
    }else if(binary == "--*"){
        return 1;
    }else if(binary == "-*-"){
        return 2;
    }else if(binary == "-**"){
        return 3;
    }else if(binary == "*--"){
        return 4;
    }else if(binary == "*-*"){
        return 5;
    }else if(binary == "**-"){
        return 6;
    }else if(binary == "***"){
        return 7;
    }
}

int main() {
    string input;
    int num = 0;
    while(getline(cin, input)){
        if(input != "caw caw"){
            num += calculate(input);
        }else{
            cout << num << endl;
            num = 0;
        }
    }
    return 0;
}

