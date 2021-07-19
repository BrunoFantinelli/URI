#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float media,idade,idade2,cont;
        idade = idade2 = cont = 0;
        cout << fixed << setprecision(2);
        while(idade>=0){
        cin >> idade;
        if(idade>=0){
        idade2 = idade + idade2;
        cont++;
        }
        }
    media = idade2/cont;
    cout << media << endl;

    return 0;
}
