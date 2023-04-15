// 연결리스트
#include <stdio.h>
#include <stdlib.h>

typedef int element;
typedef struct ListNode{   // 노드 타입
    element data;
    struct ListNode *link;
} ListNode;

void error(const char *message){
    fprintf(stderr, "%s\n", message);
    exit(1);
}
ListNode* insert_first(ListNode *head, int value){
    ListNode *p = (ListNode *)malloc(sizeof(ListNode));    //(1)
    p->data = value;               // (2)
    p->link = head;    // 헤드 포인터의 값을 복사   //(3)
    head = p;  // 헤드 포인터 변경      //(4)
    return head;   // 변경된 헤드 포인터 반환
}
ListNode* insert(ListNode *head, ListNode *pre, element value){
    ListNode *p = (ListNode *)malloc(sizeof(ListNode));    //(1)
    p->data = value;      //(2)
    p->link = pre->link;   //(3)
    pre->link = p;    //(4)
    return head;      //(5)
}
ListNode* delete_first(ListNode *head){
    ListNode *removed;
    if (head == NULL)
        return NULL;
    removed = head;    // (1)
    head = removed->link;  // (2)
    free(removed);    // (3)
    return head;      // (4)
}
ListNode* delete1(ListNode *head, ListNode *pre){
    ListNode *removed;
    removed = pre->link;
    pre->link = removed->link;    // (2)
    free(removed);       // (3)
    return head;         // (4)
}

void print_list(ListNode *head){
    for(ListNode *p = head; p != NULL; p = p->link)
        printf("%d->", p->data);
    printf("NULL \n");
}
int get_length(ListNode *head){
    int cnt = 0;
    for(ListNode *p = head; p != NULL; p = p->link)
        cnt++;
    return cnt;
}

int main(void) {
    int x = 0;
    ListNode* head = NULL;
    ListNode* pre = NULL;

    for (int i = 0; i < 5; i++) {
        head = insert_first(head, i);
        print_list(head);
    }
    printf("4와 3사이에 43삽입\n");
    pre = head;
    head = insert(head,pre,43);
    print_list(head);

    printf("3과 2사이에 32삽입\n");
    x = 2;
    for(int i=0; i<x;i++){ pre = pre -> link; }
    head = insert(head,pre,32);
    print_list(head);

    printf("pre 노드를 2로 지정 하고 다음 노드인 1을 삭제후 출력\n");
    pre = head;
    x = 4;
    for(int i=0; i<x;i++){ pre = pre -> link; }
    head = delete1(head,pre);
    print_list(head);

    printf("연결 리스트 노드의 개수 = %d \n", get_length(head));
    return 0;
}