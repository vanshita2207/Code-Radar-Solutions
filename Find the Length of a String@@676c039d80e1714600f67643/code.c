// Your code here...
#include <stdio.h>

int main() {
    char str[200];
    int length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 

    while (str[length] != '\0' && str[length] != '\n') { 
        length++;  
    }

    printf("Length of the string: %d\n", length);

    return 0;
}
