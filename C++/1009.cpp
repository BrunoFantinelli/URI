#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(){
    string nome;
    double sf,tv,total;
    cout << fixed << setprecision(2);
    cin >> nome;
    cin >> sf;
    cin >> tv;
    total = (sf + (tv * 0.15));
    cout << "TOTAL = R$ " << total << endl;
    return 0;
}