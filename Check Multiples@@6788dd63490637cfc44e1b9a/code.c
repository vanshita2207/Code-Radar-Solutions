#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    if( b!=0 && a%b==0){
        printf("Yes");
    }else if(a%b==0){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}