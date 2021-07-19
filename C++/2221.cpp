#include <iostream>
using namespace std;

int main()
{
    int test, Dab, Gab, a1, a2, d1, d2, l1, l2, bonus;
    cin >> test;

    for(int i = 0; i < test; i ++){
        cin >> bonus;
        cin >> a1 >> d1 >> l1;
        cin >> a2 >> d2 >> l2;
        Dab = (a1+d1)/2;
        if(l1%2==0){
            Dab += bonus;
        }
        Gab = (a2+d2)/2;
        if(l2%2==0){
            Gab += bonus;
        }
        if(Dab == Gab){
            cout << "Empate" << endl;
        }
        else if(Dab > Gab){
            cout << "Dabriel" << endl;
        }
        else if(Gab > Dab){
            cout << "Guarte" << endl;
        }

    }
    return 0;
}
