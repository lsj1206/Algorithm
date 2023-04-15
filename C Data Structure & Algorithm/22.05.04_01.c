// 덱
#include <stdio.h>
#include <stdlib.h>
#define MAX_QUEUE_SIZE 5

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
element delete_rear(DequeType *q)
{
    int prev = q->rear;
    if (is_empty(q))
        error("큐가 공백 상태 입니다.");
    q->rear = (q->rear - 1 + MAX_QUEUE_SIZE) % MAX_QUEUE_SIZE;
    return q->data[q->rear];
}
element get_rear(DequeType *q){
    if (is_empty(q))
        error("큐가 공백 상태 입니다.");
    return q->data[q->rear];
}
int main(void){
    char a = 'A';
    DequeType queue;

    init_deque(&queue);

    add_front(&queue, a);
    add_front(&queue, a+1);
    deque_print(&queue);

    delete_rear(&queue);
    deque_print(&queue);

    return 0;
}