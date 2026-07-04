// 구조체 스택 push/pop 1
#include <stdio.h>
#include <stdlib.h>
#define MAX_STACK_SIZE 100
#define MAX_STRING 100

typedef struct{
    int num;
    char name[MAX_STRING];
    char arr[MAX_STRING];
}
        element;
element stack[MAX_STACK_SIZE];
int  top = -1;

int is_empty(){     // 공백 상태 검출 함수
    return (top == -1);
}
int is_full(){      // 포화 상태 검출 함수
    return (top == (MAX_STACK_SIZE - 1));
}
void push(element item){        // 삽입 함수
    stack[++top] = item;
}
element pop(){      // 삭제 함수
    return stack[top--];
}
element peek(){     // 피크함수
    if (is_empty()){
        fprintf(stderr, "스택 공백 에러\n");
        exit(1);
    }
    else return stack[top];
}

int main(void){
    element ie1 = { 20191111, "Hong", "Soeul"};
    element ie2 = { 20192221, "Hong", "Soeul"};
    element ie3 = { 20193331, "Hong", "Soeul"};

    element oe1, oe2, oe3;

    push(ie1);  push(ie2);  push(ie3);
    oe1 = pop();    oe2 = pop();    oe3 = pop();

    printf("학번: %d\n", oe1.num);    printf("이름: %s\n", oe1.name);   printf("주소: %s\n", oe1.arr);

    printf("학번: %d\n", oe2.num);    printf("이름: %s\n", oe2.name);   printf("주소: %s\n", oe2.arr);

    printf("학번: %d\n", oe3.num);    printf("이름: %s\n", oe3.name);   printf("주소: %s\n", oe3.arr);
    return 0;
}