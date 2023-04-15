// 1부터 N까지 sum 반복문, 재귀
#include <stdio.h>

int sum_iter(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++)
        sum += i;
    return sum;
}
int sum_rec(int n){
    int sum;
    if(n == 0)
        return 0;
    sum = n + sum_rec(n-1);
    return sum;
}
int main(){
    int n;
    scanf("%d",&n);
    printf("반복 : %d",sum_iter(n));
    printf("\n재귀 : %d",sum_rec(n));
    return 0;
}