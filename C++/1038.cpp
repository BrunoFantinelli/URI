#include <iostream>
#include <iomanip>
using namespace std;

int main(){
 int codigo, quantidade, produto;
    float cq, xsal, xbac, ts, refri;

    cin >> codigo >> quantidade;

    if(codigo==1)
    {
        cq=4.00;
        double vt=cq*quantidade;
        cout.precision(2);
        cout << "Total: R$ " << std::fixed << vt << endl;

    }
    else if(codigo==2)
    {
          xsal=4.50;
          double vt=xsal*quantidade;
          cout.precision(2);
          cout << "Total: R$ " << std::fixed << vt << endl;
    }

    else if (codigo==3)
    {
          xbac=5.00;
          double vt=xbac*quantidade;
          cout.precision(2);
          cout << "Total: R$ " << std::fixed << vt << endl;

    }
    else if (codigo==4)
    {
         ts=2.00;
         double vt=ts*quantidade;
         cout.precision(2);
         cout << "Total: R$ " << std::fixed << vt << endl;

    }
    else if(codigo==5)
    {
          refri=1.50;
          double vt=refri*quantidade;
          cout.precision(2);
          cout << "Total: R$ " << std::fixed << vt << endl;
    }
    return 0;
}