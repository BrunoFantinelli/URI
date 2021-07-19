#include <iostream>
using namespace std;

int main(){
    int i,j;
    i = 1;
    j = 7;
    teste:
    while(j>=5){
        cout << "I=" << i << " J=" << j << endl;
        j--;
    }
    j = 7;
    i = 3;
    while(j>=5){
        cout << "I=" << i << " J=" << j << endl;
        j--;
    }
    j = 7;
    i = 5;
    while(j>=5){
        cout << "I=" << i << " J=" << j << endl;
        j--;
    }
    i = 7;
    j = 7;
    while(j>=5){
        cout << "I=" << i << " J=" << j << endl;
        j--;
    }
    i = 9;
    j = 7;
        while(j>=5){
        cout << "I=" << i << " J=" << j << endl;
        j--;
    }
    return 0;
}