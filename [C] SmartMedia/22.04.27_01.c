// 스택 중위/후위 표식
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_STACK_SIZE 100

typedef char element;

#define MAX_STACK_SIZE 100

typedef struct {
    element data[MAX_STACK_SIZE];
    int top;
} StackType;

void init_stack(StackType* s){
    s->top = -1;
}
int is_empty(StackType* s){
    return (s->top == -1);
}
int is_full(StackType* s){
    return (s->top == (MAX_STACK_SIZE - 1));
}
void push(StackType* s, element item){
    if (is_full(s)){
        fprintf(stderr, "push\n");
        return;
    }
    else s->data[++(s->top)] = item;
}
element pop(StackType* s){
    if (is_empty(s)) {
        fprintf(stderr, "pop\n");
        exit(1);
    }
    else return s->data[(s->top)--];
}
element peek(StackType* s){
    if (is_empty(s)){
        fprintf(stderr,"peek \n");
        exit(1);
    }
    else return s->data[s->top];
}

int prec(char op){
    switch (op) {
        case '(': case ')': return 0;
        case '+': case '-': return 1;
        case '*': case '/': return 2;
    }
    return -1;
}
void infix_to_postfix(const char exp[]){
    int i = 0;
    char top_op;
    StackType *ch;
    int len = strlen(exp);
    StackType s;

    init_stack(&s);
    for (i = 0; i < len; i++) {
        char ch =  exp[i];

        switch (ch) {
            case '+': case '-': case '*': case '/': //
                while (!is_empty(&s) && (prec(ch) <= prec(peek(&s))))
                    printf("%c", pop(&s));
                push(&s, ch);
                break;

            case '(':
                push(&s, ch);

            case ')':


            default:
                printf("%c", ch);
                break;
        }
    }
    while (!is_empty(&s))
        printf("%c", pop(&s));
}

int main(void){
    const char *s;
    s = "5*(8*2+3)/8";
    printf("중위표시수식 %s \n", s);
    printf("후위표시수식 ");
    infix_to_postfix(s);
    printf("\n");
    return 0;

}