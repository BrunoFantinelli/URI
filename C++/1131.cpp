#include <stdio.h>
#include <stdlib.h>

int main (){

    int cont=0, inter, gremio, repeticao, empate=0, golInter=0, golGremio=0;
    while (1){
        scanf("%d%d", &inter, &gremio);
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &repeticao);
        if (inter>gremio){
            golInter++;
        } else if (inter<gremio){
            golGremio++;
        } else {
            empate++;
        }
        cont++;
        if (repeticao == 2){
            printf("%d grenais\n", cont);
            printf("Inter:%d\n", golInter);
            printf("Gremio:%d\n", golGremio);
            printf("Empates:%d\n", empate);
            if (golInter<golGremio){
                printf("Gremio venceu mais\n");
            } else if (golInter>golGremio){
                printf("Inter venceu mais\n");
            }
            else {
                printf("Nao houve vencedor\n");
            }
            return 0;
        }
    }
    return 0;
}