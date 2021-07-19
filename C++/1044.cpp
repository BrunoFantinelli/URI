#include <iostream>
 
using namespace std;
 
int main() {
 int x, y;
    cin >> x >> y;



    if(x%y==0 || y%x==0)
    {
        cout << "Sao Multiplos" <<endl;
    }
    else if(x%y!=0 || y%x!=0)
    {

        cout << "Nao sao Multiplos" <<endl;
    }
}