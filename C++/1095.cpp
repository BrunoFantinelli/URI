#include <iostream>
using namespace std;

int main(){
    int i,j;
    i = 1;
    j = 60;
    cout << "I=" << i << " J=" << j << endl;
    while(j!=0){
        j = j - 5;
        i = i + 3;
        cout << "I=" << i << " J=" << j << endl;
    }

    return 0;
}