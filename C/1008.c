#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main (){

    int num, hora;
    float valor, valorfim;
    scanf("%d%d", &num, &hora);
    scanf("%f", &valor);
    valorfim = valor * hora;
    printf("NUMBER = %d\n", num);
    printf("SALARY = U$ %.2f\n", valorfim);
    return 0;
}
