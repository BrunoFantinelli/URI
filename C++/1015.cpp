#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
    float x1,x2,y1,y2,dist;
    cout << fixed << setprecision(4);
    cin >> x1;
    cin >> y1;
    cin >> x2;
    cin >> y2;
    dist = sqrt( pow (x2 - x1, 2) + pow (y2 - y1, 2));
    cout << dist << endl;
    return 0;
}