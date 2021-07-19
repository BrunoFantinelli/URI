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
    j = 9;
    i = 3;
    while(j>=7){
        cout << "I=" << i << " J=" << j << endl;
        j--;
    }
    j = 11;
    i = 5;
    while(j>=9){
        cout << "I=" << i << " J=" << j << endl;
        j--;
    }
    i = 7;
    j = 13;
    while(j>=11){
        cout << "I=" << i << " J=" << j << endl;
        j--;
    }
    i = 9;
    j = 15;
        while(j>=13){
        cout << "I=" << i << " J=" << j << endl;
        j--;
    }

    return 0;
}