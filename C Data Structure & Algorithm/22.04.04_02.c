// 1부터 N까지 반복문, 재귀
#include <stdio.h>

int iter(int n){
    for(int i=1;i<=n ;i++)
        printf("%d ",i);
    return 0;
}
int recursive(int n){
    if(n>0){
        recursive(n-1);
        printf("%d ",n);
    }
    return 0;
}
int main(){
    int n;
    scanf("%d",&n);
    printf("반복 : ");
    iter(n);
    printf("\n재귀 : ");
    recursive(n);
    return 0;
}