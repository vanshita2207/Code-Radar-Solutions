#include <stdio.h>

int main() {
    int n, i, j, k;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        
        for (j = i; j < n; j++) {
            printf(" ");
        }

        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }

        for (k = i - 1; k >= 1; k--) {
            printf("%d", k);
        }

        printf("\n");
    }

    return 0;
}