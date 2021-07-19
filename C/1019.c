#include <stdio.h>
#include <stdlib.h>

int main (){
    int x,seg,m,h;
    scanf("%d", &x);

    if(x<60){
        printf("0:0:%d\n",x);
    }
    else if(x>60&&x<3600){
        m = x/60;
        seg = x%60;
        printf("0:%d:%d\n",m,seg);
    }
    else if(x>3600){
        h = x/3600;
        m = (x%3600)/60;
        seg = (x%3600)%60;
        printf("%d:%d:%d\n",h,m,seg);
    }
    return 0;
}
