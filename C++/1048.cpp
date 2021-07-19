#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float salario,reajuste1,reajuste2;
    cout << fixed << setprecision(2);
    cin >> salario;
    if(salario>=0&&salario<=400.00){
       reajuste1 = salario*0.15;
       reajuste2 = salario + reajuste1;
       cout << "Novo salario: " << reajuste2 << endl;
       cout << "Reajuste ganho: " <<  reajuste1 << endl;
       cout << "Em percentual: 15 %" << endl;
    }
    else if(salario>=400.01&&salario<=800.00){
        reajuste1 = salario*0.12;
        reajuste2 = salario + reajuste1;
       cout << "Novo salario: " << reajuste2 << endl;
       cout << "Reajuste ganho: " <<  reajuste1 << endl;
       cout << "Em percentual: 12 %" << endl;
    }
    else if(salario>=800.01&&salario<=1200.00){
        reajuste1 = salario*0.10;
        reajuste2 = salario + reajuste1;
       cout << "Novo salario: " << reajuste2 << endl;
       cout << "Reajuste ganho: " <<  reajuste1 << endl;
       cout << "Em percentual: 10 %" << endl;
    }
    else if(salario>=1200.01&&salario<=2000.00){
        reajuste1 = salario*0.07;
        reajuste2 = salario + reajuste1;
       cout << "Novo salario: " << reajuste2 << endl;
       cout << "Reajuste ganho: " <<  reajuste1 << endl;
       cout << "Em percentual: 7 %" << endl;
    }
    else if(salario>2000.00){
        reajuste1 = salario*0.04;
        reajuste2 = salario + reajuste1;
       cout << "Novo salario: " << reajuste2 << endl;
       cout << "Reajuste ganho: " <<  reajuste1 << endl;
       cout << "Em percentual: 4 %" << endl;
    }
    return 0;
}