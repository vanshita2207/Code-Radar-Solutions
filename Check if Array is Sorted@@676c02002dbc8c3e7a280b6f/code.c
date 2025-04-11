// Your code here...
#include <stdio.h>

int sort(int arr[],int n){
    for(int i=0; i<n-1; i++){
        if(arr[i] > arr[n-i-1]){
            return 0;
        }
        return 1;
    }
    
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];

    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    if(sort(arr,n)){
        printf("Sorted");
    }else{
        printf("Not Sorted");
    }
    return 0;
}