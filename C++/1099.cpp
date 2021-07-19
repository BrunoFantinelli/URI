#include <iostream>
 
using namespace std;
 
int main() {
    int x, y, soma, tent,cl = 0;
    cin >> tent;
    while(cl < tent){
    soma = 0;
    cin >> x >> y;
    if(x<y){
        for(x=x+1;x<y;x++)
        {
            if(x%2==1||x%2==-1)
                soma+=x;
        }
    }
    else if(x>y)
    {
        for(y=y+1;y<x;y++)
        {
            if(y%2==1||y%2==-1)
                soma+=y;
        }
    }
    cout << soma << endl;
cl++;
}
    return 0;
}