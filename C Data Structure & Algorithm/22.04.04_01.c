// 하노이의 탑 재귀
#include <stdio.h>

void hanoi (int n, char from, char temp, char to) {
    if(n == 1){
        printf("원판 1을 %c에서 %c로 이동\n", from, to);
    }
    else{
        hanoi(n - 1, from, to, temp);
        printf("원판 %d을 %c에서 %c로 이동\n", n, from, to);
        hanoi(n - 1, temp, from, to);
    }
}
int main(){
    int n;
    printf("하노이의 탑 층수 입력 :");
    scanf("%d",&n);
    hanoi(n,'A', 'B', 'C');
    return 0;
}