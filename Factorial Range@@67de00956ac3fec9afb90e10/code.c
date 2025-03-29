// Your code here...
#include <stdio.h>

void factorialRange(int x, int y){
    if(x>y||x<0||y<0){
        printf("Invalid range");
    }
    for(int i=x;i<=y;i++){
        int fact =1;
        for(int j=1;j<=i;j++){
            fact = fact*j;
        }
        printf("%d\n",fact);
    }

}