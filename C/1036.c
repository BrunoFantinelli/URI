#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
    double a,b,c,del,delta,x1,x2;
    scanf("%lf%lf%lf", &a, &b, &c);
    del = ((b * b) - (4 * a * c));
    delta = sqrt(del);
    x1 = ((-b + (delta))/(2*a));
    x2 = ((-b - (delta))/(2*a));
    if(a*2!=0&&del>0){
        printf("R1 = %.5lf\n",x1);
        printf("R2 = %.5lf\n",x2);
    }
    else
        printf("Impossivel calcular\n");
    return 0;
}
