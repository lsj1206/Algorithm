// 트리 추가 1
#include <stdio.h>
#include <stdlib.h>

typedef int element;
typedef struct TreeNode {
    element key;
    struct TreeNode* left, * right;
} TreeNode;
//      18
//    7       26
//  3  12              31
//                  27
TreeNode n1 = { 3,  NULL, NULL };
TreeNode n2 = { 12, NULL, NULL };
TreeNode n3 = { 7,  &n1,  &n2 };
TreeNode n4 = { 27, NULL, NULL };
TreeNode n5 = { 31, &n4, NULL };
TreeNode n6 = { 26, NULL,  &n5 };
TreeNode n7 = { 18, &n3, &n6 };
TreeNode* root = &n7;
// 순환적인 탐색 함수

TreeNode* search(TreeNode* node, int key){
    if (node == NULL)
        return NULL;

    if (key == node->key)
        return node;
    else if (key < node->key)
        return search(node->left, key);
    else
        return search(node->right, key);
}
// 중위 순회
void inorder(TreeNode* root){
    if (root) {
        inorder(root->left);
        printf("[%d] ", root->key);
        inorder(root->right);
    }
}
int main(void){
    int find_num = 0;

    printf("이진 탐색 트리 중위 순회 결과 \n");
    inorder(root);
    printf("\n");
    printf("찾는 번호 :");
    scanf_s("%d", &find_num);

    if (search(root, find_num) != NULL)
        printf("이진 탐색 트리에서 %d를 발견함 \n",find_num);
    else
        printf("이진 탐색 트리에서 %d를 발견못함 \n",find_num);

    return 0;
}