// 구조체 스택 push/pop 2
#include <stdio.h>
#include <stdlib.h>

#define MAX_STACK_SIZE 100
typedef int element;
typedef struct{
    element data[MAX_STACK_SIZE];
    int top;
}StackType;

void init_stack(StackType* s){ // 스택 초기화 함수
    s->top = -1;
}
int is_empty(StackType* s){ // 공백 상태 검출 함수
    return (s->top == -1);
}
int is_full(StackType* s){ // 포화 상태 검출 함수
    return (s->top == (MAX_STACK_SIZE - 1));
}
void push(StackType* s, element item){ // 삽입 함수
    if (is_full(s)){
        fprintf(stderr, "스택 포화 에러\n");
        return;
    }
    else{
        s->data[++(s->top)] = item;
    }
}
element pop(StackType* s){ // 삭제 함수
    if (is_empty(s)){
        fprintf(stderr, "스택 공백 에러\n");
        exit(1);
    }
    else{
        return s->data[(s->top)--];
    }
}

int main(void){
    StackType s[2];

    init_stack(&s[0]);
    init_stack(&s[1]);

    push(&s[0], 1);
    push(&s[0], 2);
    push(&s[0], 3);
    push(&s[1], 4);
    push(&s[1], 5);
    push(&s[1], 6);

    printf("%d\n", pop(&s[0]));
    printf("%d\n", pop(&s[0]));
    printf("%d\n", pop(&s[0]));
    printf("%d\n", pop(&s[1]));
    printf("%d\n", pop(&s[1]));
    printf("%d\n", pop(&s[1]));

    return 0;
}