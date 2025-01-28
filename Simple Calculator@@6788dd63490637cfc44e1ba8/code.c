#include <stdio.h>

int main() {
    int n1,n2,result;
    char oper;
    scanf("%d %d %c",&n1,&n2,&oper);
    switch(oper){
        case '+': result = n1+n2;
        printf(result);
        break;
    }
    return 0;
}