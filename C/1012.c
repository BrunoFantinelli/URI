#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main (){
    double A,B,C,atr,ac,atrap,aq,aretan,pi;
    pi = 3.14159;
    scanf("%lf%lf%lf", &A,&B,&C);
    atr = ((A*C)/2);
    ac = ((C*C) * pi);
    atrap = ((C*(A+B))/2);
    aq = (B*B);
    aretan = (A*B);
    printf("TRIANGULO: %.3lf\n", atr);
    printf("CIRCULO: %.3lf\n", ac);
    printf("TRAPEZIO: %.3lf\n", atrap);
    printf("QUADRADO: %.3lf\n", aq);
    printf("RETANGULO: %.3lf\n", aretan);
    return 0;
}