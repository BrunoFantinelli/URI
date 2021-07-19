#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main (){

    char nome[100];
    double salario, venda, novosal;
    scanf("%s%lf%lf", &nome,&salario,&venda);
    novosal = salario + (venda*0.15);
    printf("TOTAL = R$ %.2lf\n", novosal);
    return 0;
}