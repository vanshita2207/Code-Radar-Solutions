#include <stdio.h>

int main() {
    int age,citizen;
    scanf("%d %d",&age,&citizen);
    if ((age>=18 && citizen==1) ||(age>=18 && citizen==0)){
        printf("Eligible");
    }
    else {
        printf("Not Eligible");
    }
    
    return 0;
}