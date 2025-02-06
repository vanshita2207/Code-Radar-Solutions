#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        char lttr = 'A' + i-1;
        for(int j=1; j<=n;j++){
            printf("%c",lttr);
            lttr++;
        }
        printf("\n");
    }
    return 0;
}