#include<iostream>
using namespace std;

int main(){
    string entrada;
    while(cin>>entrada){
        int a[10]={0,0,0,0,0,0,0,0,0,0};
        for(int i=0; i < entrada.length(); i++){
            if(entrada[i]=='0')
                a[0]++;
            else if(entrada[i]=='1')
                a[1]++;
            else if(entrada[i]=='2')
                a[2]++;
            else if(entrada[i]=='3')
                a[3]++;
            else if(entrada[i]=='4')
                a[4]++;
            else if(entrada[i]=='5')
                a[5]++;
            else if(entrada[i]=='6')
                a[6]++;
            else if(entrada[i]=='7')
                a[7]++;
            else if(entrada[i]=='8')
                a[8]++;
            else if(entrada[i]=='9')
                a[9]++;
        }
        int maior = a[0], maior_num = 0;
        for(int i=1;i<10;i++){
            if(a[i]>=maior)
            {
                maior = a[i];
                maior_num = i;
            }
        }
        cout<< maior_num <<endl;
    }
    return 0;
}
