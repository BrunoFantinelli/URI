#include <iostream>
#include <iomanip>
using namespace std;


int main(){
    double area, raio, gas;
    cin >> raio >> gas;
    area = (4*3.1415*(raio*raio*raio))/3;
    int res = gas/area;
    cout << res << endl;

}
