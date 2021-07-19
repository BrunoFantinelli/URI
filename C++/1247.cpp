#include <iostream>
#include <math.h>
using namespace std;
int main(){
     float vf, vg, d;
     float hip;
     
     while(cin >> d){
                    cin >> vf;
                    cin >> vg;
                    
                    hip = sqrt(d*d + 144);
                    
                    if(hip/vg <= 12/vf) cout << "S\n";
                    else cout << "N\n";
     }
     return 0;
}