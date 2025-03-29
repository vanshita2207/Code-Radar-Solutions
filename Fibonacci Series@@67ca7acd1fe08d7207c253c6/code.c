void fibonacciSeries(int n) {
    int fib[n]; 
    fib[0] = 0;

    if(fib[n] == 1){
        printf("%d",fib[0]);
    }

    fib[1] = 1;
    printf("%d %d ", fib[0], fib[1]);

    for (int i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
        printf("%d ", fib[i]);
    }
    printf("\n");
}
