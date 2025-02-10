#include <stdio.h>

int main()

int n, binary [32],1=0;

scanf("d",&n);

if(n==0){
    printf("0");
    return 0;
}
while(n>0){
    binary[i++]=n&1;
    n>>=1;
    }

while(i-){
    printf("%d", binary[i]);
}

return 0;