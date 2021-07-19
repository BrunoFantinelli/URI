#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int produtos, quant,prod;
    float total = 0;
    cin >> produtos;
    cout << fixed << setprecision(2);
    for(int i = 0; i < produtos; i++){
        cin >> prod >> quant;
        if(prod == 1001){
            total += quant * 1.50;
        }
        else if(prod == 1002){
            total += quant * 2.50;
        }
        else if(prod == 1003){
            total += quant * 3.50;
        }
        else if(prod == 1004){
            total += quant * 4.50;
        }
        else if(prod == 1005){
            total += quant * 5.50;
        }
    }
    cout << total << endl;
    return 0;
}