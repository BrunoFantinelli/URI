#include <iostream>
using namespace std;

int main(){
    int qtd, la, lb, sa, sb;
    cin >> qtd;
    cin >> la >> lb;
    cin >> sa >> sb;
    if(qtd >= la && qtd <= lb && qtd >= sa && qtd <= sb){
        cout << "possivel" << endl;
    }else{
        cout << "impossivel" << endl;
    }
    return 0;
}
