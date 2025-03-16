// Your code here...
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int left, right, is_palindrome = 1;
    scanf("%s", str);

    int len = strlen(str);
    left = 0;
    right = len - 1;

    while (left < right) {
        if (tolower(str[left]) != tolower(str[right])) {
            is_palindrome = 0;
            break;
        }
        left++;
        right--;
    }

    if (is_palindrome)
        printf("Yes");
    else
        printf("No");

    return 0;
}

