#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
    int codigo, quantidade, produto;
    float cq, xsal, xbac, ts, refri;
    scanf("%d%d", &codigo,&quantidade);

    if(codigo==1)
    {
        cq=4.00;
        double vt=cq*quantidade;
        printf("Total: R$ %.2f\n", vt);
    }
    else if(codigo==2)
    {
          xsal=4.50;
          double vt=xsal*quantidade;
          printf("Total: R$ %.2f\n", vt);
    }

    else if (codigo==3)
    {
          xbac=5.00;
          double vt=xbac*quantidade;
          printf("Total: R$ %.2f\n", vt);
    }
    else if (codigo==4)
    {
         ts=2.00;
         double vt=ts*quantidade;
         printf("Total: R$ %.2f\n", vt);
    }
    else if(codigo==5)
    {
          refri=1.50;
          double vt=refri*quantidade;
          printf("Total: R$ %.2f\n", vt);
    }
    return 0;
}