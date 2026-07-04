// 구조체, 포인터
#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char name[10];
    int age;
    double cash;
}
        person;

int main(void){
    person p;
    person *p1 = malloc(sizeof(person));

    printf("이름 입력:");   scanf("%s",p1->name);
    printf("나이 입력:");   scanf("%d",&p1->age);
    printf("월급 입력:");   scanf("%lf",&p1->cash);

    printf("이름: %s ",p1->name);
    printf("나이: %d ",p1->age);
    printf("월급: %.1lf\n",p1->cash);

//    printf("이름 입력:");   scanf("%s",p.name);
//    printf("나이 입력:");   scanf("%d",&p.age);
//    printf("월급 입력:");   scanf("%lf",&p.cash);
//
//    printf("이름: %s\n",p.name);
//    printf("나이: %d\n",p.age);
//    printf("월급: %.1lf\n",p.cash);
}