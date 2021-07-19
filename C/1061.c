 #include <stdio.h>

int main(){
    int W,X,Y,Z,d1,h1,m1,s1,d2,h2,m2,s2,st1,st2,stf;
    char dia1[3],dia2[3],krct;

    scanf("Dia %d",&d1);
    scanf("%d : %d : %d\n",&h1,&m1,&s1);
    scanf("Dia %d",&d2);
    scanf("%d : %d : %d",&h2,&m2,&s2);

    st1=(s1+m1*60+h1*60*60+d1*60*60*24);
    st2=(s2+m2*60+h2*60*60+d2*60*60*24);


    stf=(st2-st1);
    W=stf/(60*60*24);
    X=(stf-W*60*60*24)/(60*60);
    Y=(stf-W*60*60*24-X*60*60)/60;
    Z=stf-W*60*60*24-X*60*60-Y*60;


    printf("%d dia(s)\n",W);
    printf("%d hora(s)\n",X);
    printf("%d minuto(s)\n",Y);
    printf("%d segundo(s)\n",Z);
    return 0;
}
