#include <stdio.h>

int count(int arr[], int n){
    int counteven = 0;
    int countodd = 0;
    for(int i=0; i<n; i++){
        if(int arr[i] % 2 != 0){
            counteven++;
        }else{
            countodd++;
        }
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];

    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    //output
    for(int i =0 ; i<n; i++){
        printf("%d\t", count(arr,n));
    }
    printf("\n");
    return 0;
}