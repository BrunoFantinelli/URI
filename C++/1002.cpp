#include <iostream>
#include <iomanip>

using namespace std;

int main(){
 double raio,area,pi;
 cout << fixed << setprecision(4);
 pi =  3.14159;
 cin >> raio;
 area = pi * (raio * raio);
 cout << "A=" << area << endl;
}
