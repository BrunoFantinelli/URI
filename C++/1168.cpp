#include <iostream>
 
using namespace std;
 
int main() {
int n,x = 0;;
    string leds;
    cin >> n;
    for(int j = 0; j < n; j++){
        cin >> leds;
        for(int i = 0; i < leds.length(); i++){
        if(leds[i] == '0'){
        x += 6;
        }
        else if(leds[i] == '1'){
        x += 2;
        }
        else if(leds[i] == '2'){
        x += 5;
        }
        else if(leds[i] == '3'){
        x += 5;
        }
        else if(leds[i] == '4'){
        x += 4;
        }
        else if(leds[i] == '5'){
        x += 5;
        }
        else if(leds[i] == '6'){
        x += 6;
        }
        else if(leds[i] == '7'){
        x += 3;
        }
        else if(leds[i] == '8'){
        x += 7;
        }
        else if(leds[i] == '9'){
        x += 6;
        }
    }
    cout << x << " leds" << endl;
    x = 0;
}
 
    return 0;
}