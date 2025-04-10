#include <stdio.h>
#include <string.h>
int main() {
    char str[200], sub[50];
    int i, j, found, count = 0;
    int str_len, sub_len;
    
    gets(str); 
    
    gets(sub);

    str_len = strlen(str);
    sub_len = strlen(sub);

    for (i = 0; i <= str_len - sub_len; i++) {
        found = 1;
        for (j = 0; j < sub_len; j++) {
            if (str[i + j] != sub[j]) {
                found = 0;
                break;
            }
        }
        if (found)
            count++;
    }
    printf(count);
    return 0;
}