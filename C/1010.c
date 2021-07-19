#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main (){
    double x1,x2,x3,xx1,xx2,xx3;
    scanf("%lf%lf%lf",&x1,&x2,&x3);
    scanf("%lf%lf%lf",&xx1,&xx2,&xx3);
    double result = (x2*x3) + (xx2*xx3);
    printf("VALOR A PAGAR: R$ %.2lf\n", result);
    return 0;
}
