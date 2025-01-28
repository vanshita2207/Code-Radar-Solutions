#include <stdio.h>

int main() {
    int n1,n2,result;
    char oper;
    scanf("%d %d %c",&n1,&n2,&oper);
    switch(oper){
        case '+': result = n1+n2;
        printf("%d",result);
        break;

        case '-': result= n1-n2;
        printf("%d",result);
        break;

        case '*': result= n1*n2;
        printf("%d",result);
        break;

        case '/': 
        if(n2!=0){
            result = n1/n2;
            printf("%d",result);
        }else{
            printf("error");
        }
        break;
        default: printf("Invalid");
        break;
    }
    return 0;
}