#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
int main (){
    unsigned long int x, y, r;

    while(scanf("%lu%lu",&x,&y) != EOF) {
       r = x ^ y;
       printf("%lu\n",r);
  }

}
