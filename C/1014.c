#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main (){
    float x,y,gasto;
    scanf("%f%f", &x,&y);
    gasto = x/y;
    printf("%.3f km/l\n", gasto);
    
    return 0;
}
