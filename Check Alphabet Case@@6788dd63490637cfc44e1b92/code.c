#include <stdio.h>

int main() {
    char ch;
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z'){
        printf("Lowercase");
    }else if (ch<'a' && ch>'z'){
        printf("Uppercase");
    }else{
        printf("Not an alphabet");
    }
    return 0;
}