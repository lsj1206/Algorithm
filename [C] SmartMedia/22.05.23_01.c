// 이진 트리
#include <stdio.h>
#define MAX_SIZE 12


void Add_Tree(int Tree1[MAX_SIZE],int pos, int item){
    Tree1[pos] = item;
}
void Print_Tree(int Tree1[MAX_SIZE]){
    for(int i = 0; i < MAX_SIZE; i++){
        printf("%d",Tree1[i]);
        printf("-");
    }
    printf("\n");
}
void Search_Tree(int Tree1[MAX_SIZE], int pos) {
    if (pos / 2 == NULL)
        printf("부모 노드 없음 | ");
    else
        printf("부모 노드 출력: %d | ",Tree1[pos / 2]);
    if (2 * pos == NULL)
        printf("좌측 자식 노드 없음 | ");
    else
        printf("좌측 자식 노드 출력: %d | ",Tree1[2 * pos]);
    if (2 * pos + 1 == NULL)
        printf("우측 자식 노드 없음");
    else
        printf("우측 자식 노드 출력: %d",Tree1[2 * pos + 1]);
}
void main(){
    int Tree2[MAX_SIZE];
    int k;

    Add_Tree(Tree2, 0, NULL);
    Add_Tree(Tree2, 1, 10);
    Add_Tree(Tree2, 2, 20);
    Add_Tree(Tree2, 3, 30);
    Add_Tree(Tree2, 4, 40);
    Add_Tree(Tree2, 5, 50);
    Add_Tree(Tree2, 6, NULL);
    Add_Tree(Tree2, 7, NULL);
    Add_Tree(Tree2, 8, NULL);
    Add_Tree(Tree2, 9, NULL);
    Add_Tree(Tree2, 10, NULL);
    Add_Tree(Tree2, 11, NULL);

    Print_Tree(Tree2);

    printf("찾을 노드 번호:");
    scanf("%d",&k);

    Search_Tree(Tree2,k);
}