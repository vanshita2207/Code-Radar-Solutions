// Your code here...
#include <stdio.h>
#include <string.h>

int main() {
    char str1[200], str2[200];

    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    // Remove newline characters from fgets if they exist
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    strcat(str1, str2);  // Use string concatenation

    printf("%s\n", str1);

    return 0;
}

