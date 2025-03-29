// Your code here...
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int digitRightShift(int N){
    char str[20];
    sprintf(str,"%d",N);
    int len = strlen(str);
    if (len==1)
    return N;
    char lastdigit= str[len-1];
    for(int i =len-1;i>0;i--){
        str[i]=str[i-1];
    }
    str[0]= lastdigit;
    return atoi(str);
}