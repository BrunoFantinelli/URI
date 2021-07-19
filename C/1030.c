#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
int josephus(int n,int k){
      if(n==1){
        return 1;
      }
      else{
        return (josephus(n-1,k)+k-1)%n+1;
      }
}

int main(){
    int testes,n,k,i;
    scanf("%d", &testes);
        for(i=1;i <= testes;i++){
            scanf("%d%d",&n,&k);
            int res = josephus(n,k);
            printf("Case %d: %d\n",i,res);
        }
    return 0;
}
