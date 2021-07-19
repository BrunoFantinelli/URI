#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main (){

    double x,y;
    scanf("%lf%lf", &x,&y);
    double media= ( ((x*3.5)+(y*7.5))/11);
    printf("MEDIA = %.5lf\n", media);
    return 0;
}
