// 피보나치의 수 재귀
#include <stdio.h>

int fib_rec(int n){

    if(n == 0 || n == 1) return n;
    return (fib_rec(n-1) + fib_rec(n-2));
}
int fib_iter(int n){
    int result, a = 0, b = 1;
    if(n == 0 || n == 1) return n;
    for(int i = 2; i <= n; i++){
        result = a + b;
        a = b;
        b = result;
    }
    return result;
}
int main(){
    int n;
    scanf("%d",&n);
    printf("fib_rec(%d) = %d\n",n,fib_rec(n));
    printf("fib_iter(%d) = %d\n",n,fib_iter(n));
}