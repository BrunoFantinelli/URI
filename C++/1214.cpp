#include <iostream>
#include <iomanip>
using namespace std;


int main(){
    int c,n,i;
    float soma,s;
    cin >> c;
    cout << fixed << setprecision(3);
    while(c > 0){
            cin >> n;
            soma = 0;
            s = 0;
            int num[n];
            for(i = 0; i < n; i++){
                    cin >> num[i];
                    soma+=num[i];
            }
            soma /= n;
            for(i = 0; i < n; i++){
                    if(num[i] > soma) s++;
            }
            cout << (s/n)*100.000 << "%" << endl;
            c--;
    }
    return 0;
}
