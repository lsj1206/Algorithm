// 덱 - 회문
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_QUEUE_SIZE 100

typedef int element;
typedef struct {
    element  data[MAX_QUEUE_SIZE];
    int  front, rear;
} DequeType;

void error(const char *message){
    fprintf(stderr, "%s\n", message);
    exit(1);
}
void init_deque(DequeType *q){
    q->front = q->rear = 0;
}
int is_empty(DequeType *q){
    return (q->front == q->rear);
}
int is_full(DequeType *q){
    return ((q->rear + 1) % MAX_QUEUE_SIZE == q->front);
}
void deque_print(DequeType *q){
    printf("DEQUE(front=%d rear=%d) = ", q->front, q->rear);
    if (!is_empty(q)) {
        int i = q->front;
        do {
            i = (i + 1) % (MAX_QUEUE_SIZE);
            printf("%c | ", q->data[i]);
            if (i == q->rear)
                break;
        } while (i != q->front);
    }
    printf("\n");
}
void add_rear(DequeType *q, element item){
    if (is_full(q))
        error("큐가 포화 상태 입니다.");
    q->rear = (q->rear + 1) % MAX_QUEUE_SIZE;
    q->data[q->rear] = item;
}
element delete_front(DequeType *q){
    if (is_empty(q))
        error("큐가 공백 상태 입니다.");
    q->front = (q->front + 1) % MAX_QUEUE_SIZE;
    return q->data[q->front];
}
element get_front(DequeType *q){
    if (is_empty(q))
        error("큐가 공백 상태 입니다.");
    return q->data[(q->front + 1) % MAX_QUEUE_SIZE];
}
void add_front(DequeType *q, element val){
    if (is_full(q))
        error("큐가 포화 상태 입니다.");
    q->data[q->front] = val;
    q->front = (q->front - 1 + MAX_QUEUE_SIZE) % MAX_QUEUE_SIZE;
}
element delete_rear(DequeType *q){
    int prev = q->rear;
    if (is_empty(q))
        error("큐가 공백 상태 입니다.");
    q->rear = (q->rear - 1 + MAX_QUEUE_SIZE) % MAX_QUEUE_SIZE;
    return q->data[prev];
}
element get_rear(DequeType *q){
    if (is_empty(q))
        error("큐가 공백 상태 입니다.");
    return q->data[q->rear];
}
int main(void){
    char s[100];
    int equel = 1;
    int j = 1;

    DequeType queue;
    init_deque(&queue);

    printf("영문 문장을 입력하세요");
    scanf("%s",s,100);

    for(int i = 0; i<strlen(s);i++){
        add_rear(&queue,s[i]);
    }
    while(j != (strlen(s)+1)/2){
        char f = delete_front(&queue);
        char r = delete_rear(&queue);
        if (f != r) {
            equel = 0;
            printf("입력하신 문장은 회문이 아닙니다.");
        }
        j++;
    }
    if(equel==1)
        printf("입력하신 문장은 회문입니다.");
}