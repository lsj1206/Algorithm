// 트리 추가 3
#include <stdio.h>
#include <stdlib.h>

typedef struct TreeNode {
    int data;
    struct TreeNode *left, *right;
} TreeNode;
         +
      *     +
    1       4   16  25
TreeNode n1 = { 16,  NULL, NULL };
TreeNode n2 = { 25,  NULL,  NULL };
TreeNode n3 = { '*',  &n1,  &n2 };
TreeNode n4 = { 1, NULL, NULL };
TreeNode n5 = { 4, NULL, NULL };
TreeNode n6 = { '+', &n4,  &n5 };
TreeNode n7 = { '/', &n3,  &n6 };
TreeNode *exp = &n7;
 수식 계산 함수
int evaluate(TreeNode *root){
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
        return root->data;
    else{
        int op1 = evaluate(root->left);
        int op2 = evaluate(root->right);

        printf("%d %c %d을 계산합니다.\n", op1, root->data, op2);

        switch (root->data){
            case '+':
                return op1 + op2;
            case '-':
                return op1 - op2;
            case '*':
                return op1 * op2;
            case '/':
                return op1 / op2;
        }
    }
    return 0;
}

int main(void){
    printf("수식의 값은 %d입니다. \n", evaluate(exp));
    return 0;
}
//------------------
//#include <stdio.h>
//#include <stdlib.h>
//#include <memory.h>
//
//typedef struct TreeNode {
//    int data;
//    struct TreeNode *left, *right;
//} TreeNode;
//
//#define SIZE 100
//int top = -1;
//TreeNode *stack[SIZE];
//
//void push(TreeNode *p){
//    if (top < SIZE - 1)
//        stack[++top] = p;
//}
//
//TreeNode *pop(){
//    TreeNode *p = NULL;
//    if (top >= 0)
//        p = stack[top--];
//    return p;
//}
//
//void inorder_iter(TreeNode *root){
//    while (1) {
//        for (; root; root = root->left) //for (; root!=NULL; root = root->left)
//            push(root);
//
//        root = pop();
//
//        if (!root) break;   //if (root==NULL) break;
//
//        printf("[%d] ", root->data);
//
//        root = root->right;
//    }
//}
//      15
//    4       20
//    1          16  25
//TreeNode n1 = { 1,  NULL, NULL };
//TreeNode n2 = { 4,  &n1,  NULL };
//TreeNode n3 = { 16, NULL, NULL };
//TreeNode n4 = { 25, NULL, NULL };
//TreeNode n5 = { 20, &n3,  &n4 };
//TreeNode n6 = { 15, &n2,  &n5 };
//TreeNode *root = &n6;
//
//int main(void){
//    printf("중위 순회 = ");
//    inorder_iter(root);
//    printf("\n");
//    return 0;
//}
//------------------
//#include <stdio.h>
//#include <stdlib.h>
//#include <memory.h>
//
//typedef struct TreeNode {
//    int data;
//    struct TreeNode *left, *right;
//} TreeNode;
//
//TreeNode n1 = {1, NULL, NULL};
//TreeNode n4 = {4, NULL, NULL};
//TreeNode n2 = {2, &n4, NULL};
//TreeNode n3 = {3, &n1, &n2};
//TreeNode n5 = {5, NULL, NULL};
//TreeNode n10 = {10, &n5, NULL};
//TreeNode n7 = {7, NULL, &n10};
//TreeNode n6 = {6, &n3, &n7};
//TreeNode *root = &n6;
//
// 전위 순회
//preorder(TreeNode *root){
//    if (root  != NULL){
//    printf("[%d]", root->data);        // 노드 방문
//    preorder(root->left);                // 좌측 서브 트리 순회
//    preorder(root->right);            // 우측 서브 트리 순회
//    }
//}
// 중위 순회
//inorder(TreeNode *root){
//    if (root != NULL){
//    inorder(root->left);             // 좌측 서브 트리 순회
//    printf("[%d]", root->data);        // 노드 방문
//    inorder(root->right);                // 우측 서브 트리 순회
//    }
//}
// 후위 순회
//postorder(TreeNode *root){
//    if (root  != NULL){
//    postorder(root->left);            // 좌측 서브 트리 순회
//    postorder(root->right);           // 우측 서브 트리 순회
//    printf("[%d]", root->data);
//    }
//}
//int main(void)
//{
//    printf("전위 순회 = ");
//    preorder(root);
//    printf("\n");
//
//    printf("중위 순회 = ");
//    inorder(root);
//    printf("\n");
//
//    printf("후위 순회 = ");
//    postorder(root);
//    printf("\n");
//    return 0;
//}