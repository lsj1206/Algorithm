// 팩토리얼 재귀
#include <stdio.h>

int factorial(int n){

    printf("factorial(%d)\n",n);
    if(n<=1)return(1);
    else return(n * factorial(n-1));
}

int factorial_iter(int n){
    int i, result=1;
    for(i=1; i<=n; i++){
        printf("%d * %d = ",i,result);
        result = result * i;
        printf("%d\n",result);
    }
    return(result);
}

int main(){
    int n;
    scanf("%d",&n);

    printf("factorial(%d) = %d\n", n, factorial(n));
    printf("%d! = %d", n, factorial_iter(n));
}