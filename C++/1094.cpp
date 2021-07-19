#include <iostream>
using namespace std;

int main()
{
    int n, cont, total1=0;
    int totalc=0, totals=0, totalr=0;
    double porc_c=0, porc_s=0, porc_r=0, qnt, total=0;
    cout.setf(ios::fixed);
    cout.precision(2);
    char cobaia;

    cin >> n;

    for(cont=0;cont<n;cont++)
    {
        cin >> qnt >> cobaia;
        total1=total1+qnt;
        total=total+qnt;

        if(cobaia=='C')
        {
            totalc=totalc+qnt;
        }
        else if(cobaia=='R')
        {
            totalr=totalr+qnt;
        }
        else if(cobaia=='S')
        {
            totals=totals+qnt;
        }

    }
    porc_c=(totalc/total)*100;
    porc_r=(totalr/total)*100;
    porc_s=(totals/total)*100;

    cout << "Total: " << total1 << " cobaias" << endl;
    cout << "Total de coelhos: " << totalc << endl;
    cout << "Total de ratos: " << totalr << endl;
    cout << "Total de sapos: " << totals << endl;
    cout << "Percentual de coelhos: " << porc_c << " %" << endl;
    cout << "Percentual de ratos: " << porc_r << " %" << endl;
    cout << "Percentual de sapos: " << porc_s << " %" << endl;


    return 0;
}