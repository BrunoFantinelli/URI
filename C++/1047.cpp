#include <iostream>
using namespace std;


int main(){
    int a,b,c,d,x,y;
    cin >> a >> x >> b >> y;
    if(a==y && b==y && y==x){
        c=x-y;
        d=24+a-b;
        cout << "O JOGO DUROU " << d << " HORA(S) E " << c << " MINUTO(S)" << endl;
    }
    else if(a==b && y>x){
        c=y-x;
        d=a-b;
        cout << "O JOGO DUROU " << d << " HORA(S) E " << c << " MINUTO(S)" << endl;
    }
    else if(a==b && x>y){
        c=60-x+y;
        d=24-a+b-1;
        cout << "O JOGO DUROU " << d << " HORA(S) E " << c << " MINUTO(S)" << endl;
    }
    else if(x==y && a<b){
        c=0;
        d=b-a;
        cout << "O JOGO DUROU " << d << " HORA(S) E " << c << " MINUTO(S)" << endl;
    }
    else if(x==y && a>b){
        c=0;
        d=24-a+b;
        cout << "O JOGO DUROU " << d << " HORA(S) E " << c << " MINUTO(S)" << endl;
    }
    else if(b>a && y>x){
        c=y-x;
        d=b-a;
        cout << "O JOGO DUROU " << d << " HORA(S) E " << c << " MINUTO(S)" << endl;
    }
    else if(a<b && x>y){
        c=60-x+y;
        d=b-a-1;
        cout << "O JOGO DUROU " << d << " HORA(S) E " << c << " MINUTO(S)" << endl;
    }
    else if(a>b && x<y){
        c=y-x;
        d=24-a-1+b;
        cout << "O JOGO DUROU " << d << " HORA(S) E " << c << " MINUTO(S)" << endl;
    }
    else if(a>b && x>y){
        c=60+y-x;
        d=24+b-a-1;
        cout << "O JOGO DUROU " << d << " HORA(S) E " << c << " MINUTO(S)" << endl;
    }
    return 0;
}
