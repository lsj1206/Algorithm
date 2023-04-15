// 이중 연결 리스트
#include <stdio.h>
#include <stdlib.h>

int a = 5;
typedef int element;
typedef struct DListNode{  // 이중연결 노드 타입
    element data;
    struct DListNode* llink;
    struct DListNode* rlink;
} DListNode;

// 이중 연결 리스트를 초기화
void init(DListNode* phead){
    phead->llink = phead;
    phead->rlink = phead;
}
// 이중 연결 리스트의 노드를 출력
void print_dlist(DListNode* phead){
    DListNode* p;

    printf("헤드노드기준 우측방향 출력\n");
    p = phead->rlink;

    for (int i=0; i < a; i++){
        printf("<-%d->",p->data);
        p = p->rlink;
    }
    printf("\n");

    printf("헤드노드기준 좌측방향 출력\n");
    p = phead->llink;

    for (int i=0; i < a; i++){
        printf("<-%d->",p->data);
        p = p->llink;
    }
    printf("\n\n");
}
// 새로운 데이터를 노드 before의 오른쪽에 삽입한다.
void dinsert(DListNode* before, element data){
    DListNode* newnode = (DListNode*)malloc(sizeof(DListNode));
    newnode->data = data;
    newnode->llink = before;
    newnode->rlink = before->rlink;
    before->rlink->llink = newnode;
    before->rlink = newnode;
}
// 노드 removed를 삭제한다.
void ddelete(DListNode* head, DListNode* removed){
    if (removed == head) return;
    removed->llink->rlink = removed->rlink;
    removed->rlink->llink = removed->llink;
    free(removed);
}
int main(void){
    DListNode* head = (DListNode*)malloc(sizeof(DListNode));
    init(head);

    printf("<<삽입연산>>\n");

    for (int i = 0; i < a; i++) {
        dinsert(head, i * 10);
    }

    print_dlist(head);

    ddelete(head, head->rlink);
    print_dlist(head);

    free(head);
    return 0;
}