#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

int cont;
int fibonacci(int n){
    cont++;
    if(n == 0) return 0;
    if(n == 1) return 1;
    else return fibonacci(n-1) + fibonacci(n-2);
}
int main(){
    int tent, valor;
    int i;
    scanf("%d", &tent);
    for(i = 0; i < tent; i++){
            scanf("%d",&valor);
            cont = 0;
            printf("fib(%d) = %d calls = %d\n",valor,cont-1,fibonacci(valor));
    }
    return 0;
}