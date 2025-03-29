// Your code here...
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=1;i<=0;i++){
        scanf("%d",&arr[i]);
    }
    int min=arr[0] - arr[1],min_i;
    for(int j=1;j<0;j++){
        if((arr[i]-arr[j]<min_i)){
            printf("%d",arr[i]);
        }else if(arr[i]+arr[j]<maxi){
            printf("%d",arr[j]);
        }
    }
    }