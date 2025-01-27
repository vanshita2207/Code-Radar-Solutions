#include <stdio.h>

int main() {
    int l,b,h;
    scanf("%d %d %d",&l,&b,&h);
    if (l==b && b==h && h==l){
        printf("Equilateral");
    }else if (l==b || l==h || b==h || b==l || h==l || h==b){
        printf("Isosceles");
    }else{
        printf("Scalene");
    }
    return 0;
}