// Your code here...
#include <stdio.h>
int memo[1000];
// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...
// fibonacci(n) = fibonacci(n-1) + fibonacci(n-2);

int fibonacciSeries(int n){
    if(n == 1 || n==2){
        return n-1;
    }
    if(memo[n] != -1){
        return memo[n];
    }
    return memo[n] = fibonacciSeries(n-1) + fibonacciSeries(n-2);
}
 
