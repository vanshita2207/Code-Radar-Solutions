#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        char lttr = 'A';
        for(int j=1; j<=n-i;j++){
            printf(" ");
        }
        for(int j=1;j<=i, j++){
            printf("%c",lttr+j-1);
        }
        printf("\n");
    }
    return 0;
}