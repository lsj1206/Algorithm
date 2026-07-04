// 별찍기 반복문, 재귀
#include <stdio.h>

int rec_star(int n){
    if(n != 0){
        rec_star(n-1);
        printf("\n");
        for(int i = 1; i <= n; i++){
            printf("*");
        }
    }
}
int iter_star(int n){
    int i,j;
    for(i = 0; i <= n; i++){
        printf("\n");
        for(j = 0; j <= i-1; j++){
            printf("*");
        }
    }
}
int main() {
    int n;
    scanf("%d",&n);
    printf("rec_star programming\n");
    printf("====================\n");
    rec_star(n);
    printf("\n\n");
    printf("iter_star programming\n");
    printf("====================\n");
    iter_star(n);
    printf("\n");
}