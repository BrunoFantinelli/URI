#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double x,y;
    int i=1;
    cout << fixed << setprecision(2);
        while(cin>>x>>y){
        double percent,aumento;
        aumento=y-x;

        percent=(aumento*100)/x*1.00;

        cout << "Projeto " << i << ":" << endl;
        cout << "Percentual dos juros da aplicacao: " << percent << " %" << endl << endl;
        i++;
    }
    return 0;
}

