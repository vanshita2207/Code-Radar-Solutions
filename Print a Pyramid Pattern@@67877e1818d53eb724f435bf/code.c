#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i; i<=n; i++){
        for(int j; j<=2*n-1; j++){
            if(j>=n-(i-1) && j<=n+(i-1))
            {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}