#include <stdio.h>

int count(int arr[], int n, int *counteven, int *countodd){
    for(int i=0; i<n; i++){
        if(arr[i] % 2 != 0){
            *countodd++;
        }else{
            *counteven++;
        }
    }
}

int main(){
    int counteven = 0;
    int countodd = 0;
    int n;
    scanf("%d",&n);
    int arr[n];

    //input
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    count(arr, n, &counteven, &countodd);
    printf( "%d %d",counteven, countodd);
    return 0;
}