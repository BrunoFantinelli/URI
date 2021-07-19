#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main (){

    double x,y,z;
    scanf("%lf%lf%lf", &x,&y,&z);
    double media= (((x * 2)+(y * 3)+(z * 5))/10);
    printf("MEDIA = %.1lf\n", media);
    return 0;
}