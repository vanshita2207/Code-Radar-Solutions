// Your code here...
#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i = 0, j = 0;

    scanf("%s", &str1);  
    scanf("%s", &str2);  

    while (str1[i] != '\0') {
        i++;
    }
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }

    str1[i] = '\0'; 

    printf("%s\n", str1);

    return 0;
}
