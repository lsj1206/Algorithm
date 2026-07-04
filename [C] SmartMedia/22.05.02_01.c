#include <stdio.h>
#include <stdlib.h>
#define MAX_QUEUE_SIZE 5
//선형 큐
typedef int element;
typedef struct {
    int front;
    int rear;
    element data[MAX_QUEUE_SIZE];
} QueueType;

void error(const char* message){
    fprintf(stderr, "%s\n", message);
    exit(1);
}
void init_queue(QueueType* q){
    q->rear = -1;
    q->front = -1;
}
void queue_print(QueueType* q){
    for (int i = q->front + 1; i <= q->rear; i++){
        printf("%d | ", q->data[i]);
    }
    printf("\n");
}
int is_full(QueueType* q){
    if (q->rear == MAX_QUEUE_SIZE - 1)
        return 1;
    else
        return 0;
}
int is_empty(QueueType* q){
    if (q->front == q->rear)
        return 1;
    else
        return 0;
}
void enqueue(QueueType* q, int item){
    if (is_full(q)) {
        error("큐가 포화 상태 입니다.");
        return;
    }
    q->data[++(q->rear)] = item;
}
int dequeue(QueueType* q){
    if (is_empty(q)) {
        error("큐가 공백 상태 입니다.");
        return -1;
    }
    int item = q->data[++(q->front)];
    return item;
}
int main(void){
    int item = 0;
    int i = 1;
    char ch;

    QueueType q;

    init_queue(&q);

    printf("대기큐에 저장할 경우 S, 삭제하고자 할 경우 D 입력\n");

    while(1){
        scanf("%c",&ch);
        switch (ch) {
            case 'S': case 's':
                printf("현재까지 대기중인 번호: ");
                enqueue(&q, i);
                queue_print(&q);
                i++;
                break;
            case 'D': case 'd':
                item = dequeue(&q);
                printf("%d번 손님 창구로 오세요\n",item);
                printf("현재까지 대기중인 번호: ");
                queue_print(&q);
                break;
        }
    }
}