#include <stdio.h>

int main() {
    int h,z,l;
    scanf("%d%d%d", &h,&z,&l);
    if((h > l && h < z) || (h < l && h > z)){
        printf("huguinho\n");
    }else if ((l > h && l < z) || (l < h && l > z)){
        printf("luisinho\n");
    }else{
        printf("zezinho\n");
    }
    return 0;
}
