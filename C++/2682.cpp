#include<iostream>
using namespace std;
int main(){
    int n;
    int maior = 0;
    bool fim = false;
    while(cin>>n){
        if(n>maior&&!fim) maior = n;
        else{
            fim = true;
        }
    }
    cout<< maior +1<<endl;
    return 0;
}
