// N 나누기 1 더하기 반복문, 재귀
#include <stdio.h>

double sum_iter1(int n) {
    double sum = 0.0;
    int i;
    for (int i = 1; i <= n; i++)
        sum += 1/(double)i;
    return sum;
}
double sum_rec1(int n){
    double sum;
    if(n == 0)
        return 0;
    sum = 1/(double)n + sum_rec1(n-1);
    return sum;
}
int main(){
    int n;
    scanf("%d",&n);
    printf("반복 : %f",sum_iter1(n));
    printf("\n재귀 : %f",sum_rec1(n));
    return 0;
}