// 전위, 중위, 후위 순회
#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

typedef struct TreeNode {
    int data;
    struct TreeNode *left, *right;
} TreeNode;
//      99
//  4       8
//1       3   5
TreeNode n1={1, NULL, NULL};
TreeNode n2={4, &n1, NULL};
TreeNode n3={3, NULL, NULL};
TreeNode n4={5, NULL, NULL};
TreeNode n5={8, &n3, &n4};
TreeNode n6={999, &n2, &n5};

TreeNode *root = &n6;

// 전위 순회
preorder(TreeNode *root){
if (root  != NULL){
printf("[%d]", root->data);        // 노드 방문
preorder(root->left);              // 좌측 서브 트리 순회
preorder(root->right);            // 우측 서브 트리 순회
}
}
// 중위 순회
inorder(TreeNode *root){
if (root != NULL){
inorder(root->left);               // 좌측 서브 트리 순회
printf("[%d]", root->data);        // 노드 방문
inorder(root->right);              // 우측 서브 트리 순회
}
}
// 후위 순회
postorder(TreeNode *root){
if (root  != NULL){
postorder(root->left);            // 좌측 서브 트리 순회
postorder(root->right);           // 우측 서브 트리 순회
printf("[%d]", root->data);
}
}
int main(void)
{
    printf("전위 순회 = ");
    preorder(root);
    printf("\n");

    printf("중위 순회 = ");
    inorder(root);
    printf("\n");

    printf("후위 순회 = ");
    postorder(root);
    printf("\n");
    return 0;
}