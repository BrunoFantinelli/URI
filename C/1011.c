#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main (){
    double raio,result;
    scanf("%lf", &raio);
    result = (4*3.14159*(raio*raio*raio))/3.0;
    printf("VOLUME = %.3lf\n", result);
}
