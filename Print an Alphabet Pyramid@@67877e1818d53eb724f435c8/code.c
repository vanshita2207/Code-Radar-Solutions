#include <stdio.h>

int main() {
    int n,i,j,space;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=0;j<1;j++){
            printf("%c",'A'+j);
            printf("\n");
        }
    }
    return 0;
}