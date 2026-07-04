// 트리 추가 5
#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

typedef struct TreeNode {
    int data;
    struct TreeNode *left, *right;
} TreeNode;

TreeNode n1 = {1, NULL, NULL};
TreeNode n4 = {4, NULL, NULL};
TreeNode n2 = {2, &n4, NULL};
TreeNode n3 = {3, &n1, &n2};
TreeNode n5 = {5, NULL, NULL};
TreeNode n10 = {10, &n5, NULL};
TreeNode n7 = {7, NULL, &n10};
TreeNode n6 = {6, &n3, &n7};
TreeNode *root = &n6;

 전위 순회
preorder(TreeNode *root){
    if (root  != NULL){
    printf("[%d]", root->data);        // 노드 방문
    preorder(root->left);                // 좌측 서브 트리 순회
    preorder(root->right);            // 우측 서브 트리 순회
    }
}
 중위 순회
inorder(TreeNode *root){
    if (root != NULL){
    inorder(root->left);             // 좌측 서브 트리 순회
    printf("[%d]", root->data);        // 노드 방문
    inorder(root->right);                // 우측 서브 트리 순회
    }
}
 후위 순회
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