#include <iostream>
#include <iomanip>
using namespace std;


int main(){
    int casos, gols;
    int r = 0,g = 0,b = 0;
    char fez, sofreu;
    cin >> casos;
    for(int i = 0; i < casos; i++){
        cin >> gols;
        for(int j = 0; j < gols; j++){
            cin >> fez >> sofreu;
            if(fez == 'B'){
                if(sofreu == 'G'){
                    b++;
                }else if(sofreu == 'R'){
                    b+=2;
                }
            }else if(fez == 'G'){
                if(sofreu == 'B'){
                    g += 2;
                }else if(sofreu == 'R'){
                    g++;
                }
            }else if(fez == 'R'){
                if(sofreu == 'G'){
                    r+=2;
                }else if (sofreu == 'B'){
                    r++;
                }
            }
        }
        if(r == b && b == g && r == g){
            cout << "trempate" << endl;
        }else if(r == b && r > g && b > g){
            cout << "empate" << endl;
        }else if(r == g && r > b && g > b){
            cout << "empate" << endl;
        }else if(g == b && g > r && b > r){
            cout << "empate" << endl;
        }else if(g > r && g > b){
            cout << "green" << endl;
        }else if(r > g && r > b){
            cout << "red" << endl;
        }else if(b > r && b > g){
            cout << "blue" << endl;
        }
        r = g = b = 0;
    }
}